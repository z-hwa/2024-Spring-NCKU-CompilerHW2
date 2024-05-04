/* Definition section */
%{
    #include "compiler_common.h"
    #include "compiler_util.h"
    #include "main.h"

    int yydebug = 1;
%}

/* Variable or self-defined structure */
%union {
    ObjectType var_type;

    bool b_var;
    int i_var;
    float f_var;
    char *s_var;

    Object object_val;
}

/* Token without return */
%token COUT
%token SHR SHL BAN BOR BNT BXO ADD SUB MUL DIV REM NOT GTR LES GEQ LEQ EQL NEQ LAN LOR
%token VAL_ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN REM_ASSIGN BAN_ASSIGN BOR_ASSIGN BXO_ASSIGN SHR_ASSIGN SHL_ASSIGN INC_ASSIGN DEC_ASSIGN
%token IF ELSE FOR WHILE RETURN BREAK CONTINUE
%token ')' ';' '{' '}'
%token ENDL

/* Token with return, which need to sepcify type */
%token <var_type> VARIABLE_T
%token <s_var> IDENT

//有value的token 需要特別讓他帶著屬性
%token <b_var> BOOL_LIT
%token <i_var> INT_LIT
%token <f_var> FLOAT_LIT
%token <s_var> STR_LIT

%token <object_val> '('

/* Nonterminal with return, which need to sepcify type */
%type <object_val> Expression
%type <object_val> Term
%type <object_val> Factor

%left ADD SUB
%left MUL DIV REM

/* Yacc will start at this nonterminal */
%start Program

%%
/* Grammar section */

Program
    : { pushScope(); } GlobalStmtList { dumpScope(); }
    | /* Empty file */
;

GlobalStmtList 
    : GlobalStmtList GlobalStmt
    | GlobalStmt
;

GlobalStmt
    : DefineVariableStmt
    | FunctionDefStmt
	| CoutStmt
    | ReturnStmt
	| /* Empty Stmt */ 
;

/* define variable */
DefineVariableStmt
    : VARIABLE_T IDENT { insert($<s_var>2); } VAL_ASSIGN Expression ';' 
;

/* Return */
ReturnStmt
    : RETURN Expression ';' {printf("RETURN\n");}
;

/*cin cout*/
CoutStmt
	: COUT SHL PrintableList ';' { printf("string\n"); }
;

//可印出的列表
PrintableList
    : Printable 
    | PrintableList SHL Printable { printf("cout string ");} 
;

//可印出的token
Printable
    : STR_LIT { printf("STR_LIT \"%s\"\n", $<s_var>1); }
    | ENDL { printf("ID_ENT (name=endl, address=-1)\n"); }
;

/* expression */
//運算式-加減規則
Expression
    : Term
    | Expression ADD Term
    | Expression SUB Term 
;

//乘除規則
Term
    : Factor
    | Term MUL Factor
    | Term DIV Factor
;

//數字或括弧
Factor
    : INT_LIT
	| FLOAT_LIT
    | '(' Expression ')'
;

/* Function */
FunctionDefStmt
    : VARIABLE_T IDENT { createFunction($<var_type>1, $<s_var>2); } '(' { pushScope(); } FunctionParameterStmtList ')' '{' GlobalStmtList '}' { dumpScope(); }

FunctionParameterStmtList 
    : FunctionParameterStmtList ',' FunctionParameterStmt
    | FunctionParameterStmt
    | /* Empty function parameter */
;

FunctionParameterStmt
    : VARIABLE_T IDENT { insert($<s_var>2); } { pushFunParm($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT); }
    | VARIABLE_T IDENT { insert($<s_var>2); } '[' ']' { pushFunParm($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT); } //支援不帶index的一維陣列
;

/* Scope */
StmtList 
    : StmtList Stmt
    | Stmt
;

Stmt
    : COUT CoutParmListStmt ';' { stdoutPrint(); }
    | RETURN Expression ';' { printf("RETURN\n"); }
;

CoutParmListStmt
    : CoutParmListStmt SHL Expression { pushFunInParm(&$<object_val>3); }
    | SHL Expression { pushFunInParm(&$<object_val>2); } 
;

%%
/* C code section */

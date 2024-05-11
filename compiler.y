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
%token SHR SHL BAN BOR BXO MUL DIV REM GTR LES GEQ LEQ EQL NEQ LAN LOR
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

%token <object_val> '(' SUB NOT BNT ADD

/* Nonterminal with return, which need to sepcify type */
%type <object_val> Expression
%type <object_val> Or And BitwiseOr BitwiseXor BitwiseAnd Equality Relational Shift Additive Multiplicative Unary Primary 

//%type <object_val> Term
//%type <object_val> Factor

%left ADD SUB
%left MUL DIV REM

/* Yacc will start at this nonterminal */
%start Program

%%
/* Grammar section */

Program
    : { pushScope(); } GlobalStmtList { dumpScope(); } {printScope();}
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
    : VARIABLE_T IDENT { insert($<s_var>2, $<var_type>1); } VAL_ASSIGN Expression ';' 
;

/* Return */
ReturnStmt
    : RETURN Expression ';' {printf("RETURN\n");}
;

/*cin cout*/
CoutStmt
	: COUT {addMsg("cout");} SHL  PrintableList ';' { addMsg("\n"); printMsg(); }
;

//可印出的列表
PrintableList
    : Printable 
    | PrintableList SHL Printable
;

//可印出的token
Printable
    : STR_LIT { addMsg(" string"); printf("STR_LIT \"%s\"\n", $<s_var>1); }
    | ENDL { addMsg(" string"); printf("IDENT (name=endl, address=-1)\n"); }
	| Expression {addMsg(" "); addMsgObj($<object_val>1);}
;


/* expression */

Expression
	: Or
;

Or
	: And
	| Or LOR {printf("LOR\n");} And
;

And
	: BitwiseOr
	| And LAN {printf("LAN\n");} BitwiseOr
;

BitwiseOr
	: BitwiseXor
	| BitwiseOr BOR {printf("BOR\n");} BitwiseXor
;

BitwiseXor
	: BitwiseAnd
	| BitwiseXor BXO {printf("BXO\n");} BitwiseAnd
;

BitwiseAnd
	: Equality
	| BitwiseAnd BAN {printf("BAN\n");} Equality
;

Equality
	: Relational
	| Equality EQL Relational{printf("EQL\n");}  
	| Equality NEQ Relational{printf("NEQ\n");} 
;

Relational
	: Shift
	| Relational LES Shift{printf("LES\n");} 
	| Relational GTR Shift{printf("GTR\n");} 
	| Relational LEQ Shift{printf("LEQ\n");} 
	| Relational GEQ Shift{printf("GEQ\n");} 
;

Shift
	: Additive
	//| Shift SHL {printf("SHL\n");} Additive
	//| Shift SHR {printf("SHR\n");} Additive
;

Additive
	: Multiplicative
	| Additive ADD Multiplicative{printf("ADD\n");} 
	| Additive SUB Multiplicative{printf("SUB\n");} 
;

Multiplicative
	: Unary
	| Multiplicative MUL Unary{printf("MUL\n");} 
	| Multiplicative DIV Unary{printf("DIV\n");}
	| Multiplicative REM Unary{printf("REM\n");}
;

Unary
	: BNT Unary{printf("BNT\n");} 
	| ADD Unary{printf("ADD\n");} 
	| SUB Unary{printf("NEG\n");} 
	| NOT Unary{printf("NOT\n");} 
	| Primary
;

Primary
    : INT_LIT {$<object_val>0.type = OBJECT_TYPE_INT; printf("INT_LIT %d\n", $<i_var>1);}
	| FLOAT_LIT {$<object_val>0.type = OBJECT_TYPE_FLOAT; printf("FLOAT_LIT %f\n", $<f_var>1);}
    | '(' Expression ')'
	| BOOL_LIT {$<object_val>0.type = OBJECT_TYPE_BOOL; printf("BOOL_LIT %d\n", $<b_var>1);}
;

/*
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
    : INT_LIT {printf("INT_LIT %d\n", $<i_var>1);}
	| FLOAT_LIT {printf("FLOAT_LIT %d\n", $<i_var>1);}
    | '(' Expression ')'
	| SUB INT_LIT {printf("INT_LIT %d\n", -$<i_var>1);}
	| SUB FLOAT_LIT {printf("FLOAT_LIT %d\n", -$<i_var>1);}
;*/

/* Function */
FunctionDefStmt
    : VARIABLE_T IDENT { createFunction($<var_type>1, $<s_var>2); } '(' { pushScope(); } FunctionParameterStmtList ')' '{' GlobalStmtList '}' { dumpScope(); }

FunctionParameterStmtList 
    : FunctionParameterStmtList ',' FunctionParameterStmt
    | FunctionParameterStmt
    | /* Empty function parameter */
;

FunctionParameterStmt
    : VARIABLE_T IDENT { insert($<s_var>2, $<var_type>1); } { pushFunParm($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT); }
    | VARIABLE_T IDENT { insert($<s_var>2, $<var_type>1); } '[' ']' { pushFunParm($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT); } //支援不帶index的一維陣列
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

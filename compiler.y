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
%token <s_val> IDENT

//有value的token 需要特別讓他帶著屬性
%token <b_var> BOOL_LIT
%token <i_var> INT_LIT
%token <f_var> FLOAT_LIT
%token <s_var> STR_LIT

%token <object_val> '(' SUB NOT BNT ADD

/* Nonterminal with return, which need to sepcify type */
%type <object_val> Expression Printable PrintableList
%type <object_val> Or And BitwiseOr BitwiseXor BitwiseAnd Equality Relational Shift Additive Multiplicative Unary Primary TypeCast

//%type <object_val> Term
//%type <object_val> Factor

%left ADD SUB
%left MUL DIV REM

/* Yacc will start at this nonterminal */
%start Program

%%
/* Grammar section */

Program
    : { pushScope(); } GlobalStmtList { dumpScope(); }
    //| /* Empty file */
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
	| AssignStmt
	| CompoundStmt
	| SelectionStmt
	| /* Empty Stmt */ 
;

CompoundStmt
	: '{' GlobalStmt '}'
;

SelectionStmt
	: IF '(' Expression ')'{ printf("IF\n"); pushScope(); } GlobalStmt {dumpScope();}
	| SelectionStmt ELSE {printf("ELSE\n"); pushScope();} GlobalStmt {dumpScope();}
;

/*define and 設值敘述*/

AssignStmt
	: IDENT {printIDByName($<s_var>1);} Assign ';'
;

Assign
	: Assignable
	| VAL_ASSIGN Assign{printf("EQL_ASSIGN\n");}
	| ADD_ASSIGN Assign{printf("ADD_ASSIGN\n");}
	| SUB_ASSIGN Assign{printf("SUB_ASSIGN\n");}
	| MUL_ASSIGN Assign{printf("MUL_ASSIGN\n");}
	| DIV_ASSIGN Assign{printf("DIV_ASSIGN\n");}
	| REM_ASSIGN Assign{printf("REM_ASSIGN\n");}
	| BAN_ASSIGN Assign{printf("BAN_ASSIGN\n");}
	| BOR_ASSIGN Assign{printf("BOR_ASSIGN\n");}
	| BXO_ASSIGN Assign{printf("BXO_ASSIGN\n");}
	| SHR_ASSIGN Assign{printf("SHR_ASSIGN\n");}
	| SHL_ASSIGN Assign{printf("SHL_ASSIGN\n");}
	| INC_ASSIGN Assign{printf("INC_ASSIGN\n");}
	| DEC_ASSIGN Assign{printf("DEC_ASSIGN\n");}
;

Assignable
	: STR_LIT  {printf("STR_LIT \"%s\"\n", $<s_var>1); }
	| Expression
;

/* define variable */
DefineVariableStmt
	: VARIABLE_T  DeclaratorList ';' {typeSet(false);}
;

DeclaratorList
	: Declarator
	| DeclaratorList ',' Declarator
;

Declarator
	: IDENT {insert($<s_var>1, $<var_type>0, 0);}
	| IDENT VAL_ASSIGN Assignable {insert($<s_var>1, $<var_type>0, 0);}
;

/* Return */
ReturnStmt
    : RETURN Expression ';' {printf("RETURN\n");}
;

/*cin cout*/
CoutStmt
	: COUT {addMsg("cout");} SHL PrintableList ';' { addMsg("\n"); printMsg(); }
;

//可印出的列表
PrintableList
    : Printable 
    | PrintableList SHL Printable
;

//可印出的token
Printable
    : STR_LIT { addMsg(" string");
				printf("STR_LIT \"%s\"\n", $<s_var>1); }
    | ENDL { addMsg(" string"); printf("IDENT (name=endl, address=-1)\n"); }
	| Expression {
					addMsg(" ");
					addMsgObj(&$<object_val>0);
	}
;


/* expression */

Expression
	: Or
;

Or
	: And
	| Or LOR And{
				// here is correct
				objectExpBoolean('1', &$<object_val>1, &$<object_val>2, &$<object_val>0);}
;

And
	: BitwiseOr //{setType(&$<object_val>1, &$<object_val>0);}
	| And LAN BitwiseOr{objectExpBoolean('2', &$<object_val>1, &$<object_val>2, &$<object_val>0);} 
;

BitwiseOr
	: BitwiseXor //{setType(&$<object_val>1, &$<object_val>0);}
	| BitwiseOr BOR BitwiseXor{objectExpBinary('1', &$<object_val>1, &$<object_val>2, &$<object_val>0);} 
;

BitwiseXor
	: BitwiseAnd //{setType(&$<object_val>1, &$<object_val>0);}
	| BitwiseXor BXO BitwiseAnd{objectExpBinary('2', &$<object_val>1, &$<object_val>2, &$<object_val>0);} 
;

BitwiseAnd
	: Equality //{setType(&$<object_val>1, &$<object_val>0);}
	| BitwiseAnd BAN Equality{objectExpBinary('3', &$<object_val>1, &$<object_val>2, &$<object_val>0);} 
;

Equality
	: Relational //{setType(&$<object_val>1, &$<object_val>0);}
	| Equality EQL Relational{objectExpBoolean('3', &$<object_val>1, &$<object_val>2, &$<object_val>0);}  
	| Equality NEQ Relational{objectExpBoolean('4', &$<object_val>1, &$<object_val>2, &$<object_val>0);} 
;

Relational
	: Shift //{dg(2);}{setType(&$<object_val>1, &$<object_val>0);}
	| Relational LES Shift{printf("LES\n");} //{setType(&$<object_val>1, &$<object_val>0);}

	| Relational GTR Shift{printf("GTR\n");} //{setType(&$<object_val>1, &$<object_val>0);}

	| Relational LEQ Shift{printf("LEQ\n");} //{setType(&$<object_val>1, &$<object_val>0);}

	| Relational GEQ Shift{printf("GEQ\n");} //{setType(&$<object_val>1, &$<object_val>0);}

;

Shift
	: Additive //{dg(1);}{setType(&$<object_val>1, &$<object_val>0);}
	| Shift SHR Additive{printf("SHR\n");} 
	//| Shift SHL {printf("SHL\n");} Additive
;

Additive
	: Multiplicative //{setType(&$<object_val>1, &$<object_val>0);}
	| Additive ADD Multiplicative{printf("ADD\n");} //{setType(&$<object_val>1, &$<object_val>0);}

	| Additive SUB Multiplicative{printf("SUB\n");} //{setType(&$<object_val>1, &$<object_val>0);}

;

Multiplicative
	: TypeCast
	| Multiplicative MUL TypeCast{printf("MUL\n");}
	| Multiplicative DIV TypeCast{printf("DIV\n");}
	| Multiplicative REM TypeCast{printf("REM\n");}

;

TypeCast
	: Unary
	| '(' VARIABLE_T ')' Unary {
		$<object_val>0.type = $<var_type>2;
		printCastInfo($<var_type>2);
	}
;

Unary
	: BNT Unary{
				//$<object_val>0.type = $<object_val>2.type;
				printf("BNT\n");} 
	| ADD Unary{
				//$<object_val>0.type = $<object_val>2.type;
				printf("ADD\n");} 
	| SUB Unary{
				//$<object_val>0.type = $<object_val>2.type;
				printf("NEG\n");} 
	| NOT Unary{
				//$<object_val>0.type = $<object_val>2.type;
				printf("NOT\n");} 
	| Primary
;

Primary
    : INT_LIT{
			$<object_val>0.type = OBJECT_TYPE_INT;
			printf("INT_LIT %d\n", $<i_var>1);
		}
	| FLOAT_LIT {
			$<object_val>0.type = OBJECT_TYPE_FLOAT;
			printf("FLOAT_LIT %f\n", $<f_var>1);
		}
    | '(' Expression ')' {
			$<object_val>0.type = $<object_val>1.type;
		}
	| BOOL_LIT {
			$<object_val>0.type = OBJECT_TYPE_BOOL; 
			printBool($<b_var>1);
		}
	| IDENT {
			ObjectType type = getVarTypeByName($<s_var>1);
			$<object_val>0.type = type;
			printIDByName($<s_var>1);
		}
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
    : VARIABLE_T IDENT { insert($<s_var>2, $<var_type>1, 1); } { pushFunParm($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT); }
    | VARIABLE_T IDENT { insert($<s_var>2, $<var_type>1, 1); } '[' ']' { pushFunParm($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT); } //支援不帶index的一維陣列
;

/* Scope */
/*StmtList 
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
*/
%%
/* C code section */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

#define debug printf("%s:%d: ############### debug\n", __FILE__, __LINE__)

#define toupper(_char) (_char - (char)32)

const char* objectTypeName[] = {
    [OBJECT_TYPE_UNDEFINED] = "undefined",
    [OBJECT_TYPE_VOID] = "void",
    [OBJECT_TYPE_INT] = "int",
    [OBJECT_TYPE_FLOAT] = "float",
    [OBJECT_TYPE_BOOL] = "bool",
    [OBJECT_TYPE_STR] = "string",
    [OBJECT_TYPE_FUNCTION] = "function",
};

char* yyInputFileName;
bool compileError;

int indent = 0;
int scopeLevel = -1;
int funcLineNo = 0;
int variableAddress = -1;
ObjectType variableIdentType;

//當遇到變數時，將變數插入到stack之中
//但目前只實現了輸出顯示的功能
void insert(char* variableName) {
	printf("> Insert `%s` (addr: %d) to scope level %d\n", variableName, variableAddress, scopeLevel);
	variableAddress++;
}

//如果進到下一個scope 會呼叫該函數並輸出進入下一個scope的訊息
void pushScope() {
    scopeLevel++;   //增加scope level
    printf("> Create symbol table (scope level {%d})\n", scopeLevel);
}

void dumpScope() {
	scopeLevel--;
}

Object* createVariable(ObjectType variableType, char* variableName, int variableFlag) {
    return NULL;
}

void pushFunParm(ObjectType variableType, char* variableName, int variableFlag) {
}

void createFunction(ObjectType variableType, char* funcName) {
	/*Object func;	//宣告物件
	func.type = variableType;	//設置類別
	
	//setting symbol
	func.symbol->name = funcName;	//設置名稱
	func.symbol->index;// = index[scopeLevel];	//從記錄各個scope index 的 linked list中拿出目前該scope已經用幾個變數了
	func.symbol->lineno = yylineno;	//設置該函數在第幾行

	//把該物件放進推疊
	//fun.push(func)
	*/
	
	//output func msg
	printf("func: %s\n", funcName);	
	
	//insert variable
	insert(funcName);

}

void debugPrintInst(char instc, Object* a, Object* b, Object* out) {
}

bool objectExpression(char op, Object* dest, Object* val, Object* out) {
    return false;
}

bool objectExpBinary(char op, Object* a, Object* b, Object* out) {
    return false;
}

bool objectExpBoolean(char op, Object* a, Object* b, Object* out) {
    return false;
}

bool objectExpAssign(char op, Object* dest, Object* val, Object* out) {
    return false;
}

bool objectValueAssign(Object* dest, Object* val, Object* out) {
    return false;
}

bool objectNotBinaryExpression(Object* dest, Object* out) {
    return false;
}

bool objectNegExpression(Object* dest, Object* out) {
    return false;
}
bool objectNotExpression(Object* dest, Object* out) {
    return false;
}

bool objectIncAssign(Object* a, Object* out) {
    return false;
}

bool objectDecAssign(Object* a, Object* out) {
    return false;
}

bool objectCast(ObjectType variableType, Object* dest, Object* out) {
    return false;
}

Object* findVariable(char* variableName) {
    Object* variable = NULL;
    return variable;
}

void pushFunInParm(Object* variable) {
}

void stdoutPrint() {
}

int main(int argc, char* argv[]) {
    if (argc == 2) {
        yyin = fopen(yyInputFileName = argv[1], "r");
    } else {
        yyin = stdin;
    }
    if (!yyin) {
        printf("file `%s` doesn't exists or cannot be opened\n", yyInputFileName);
        exit(1);
    }

    // Start parsing
    yyparse();
    printf("Total lines: %d\n", yylineno);
    fclose(yyin);

    yylex_destroy();
    return 0;
}

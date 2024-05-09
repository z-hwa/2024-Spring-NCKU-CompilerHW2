#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"
#include "stack.h"
#include "linkedList.h"

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

LinkedList *scope_list;
Stack *scope_stack;

//當遇到變數時，將變數插入到stack之中
//但目前只實現了輸出顯示的功能
void insert(char* variableName, ObjectType type) {
	
	Object* var = (Object *)malloc(sizeof(Object));	//變數物件 用於symbol table
	SymbolData* sym = (SymbolData *)malloc(sizeof(SymbolData));	//symbol data

	Stack *sp = top(&scope_stack);
	int nowLevel = sp->scopeLevel;	//獲取當前的scope level


	//獲取儲存對應scope變數的陣列元素
	LinkedList *lp = getByKey(&scope_list, nowLevel, 's');
	LinkedList *list = lp->list; //獲取變數陣列
	int index = lp->listSize++;	

	//set symbol data
	sym->name = variableName; 
	sym->index = index;
	sym->lineno = yylineno;	
	sym->addr = variableAddress;

	//set variable data
	var->symbol = sym;
	var->type = type;

	//製造變數的資料包
	LinkedList data;
	data.var = var;
	
	insertToList(&list, data);	

	printf("> Insert `%s` (addr: %d) to scope level %d\n", variableName, variableAddress++, nowLevel);
}

//如果進到下一個scope 會呼叫該函數並輸出進入下一個scope的訊息
void pushScope() {
	scopeLevel++;	//scope level加一
 
	//創建新的scope 並放入linked list
	LinkedList data;
	data.scopeLevel = scopeLevel;
	data.list = NULL;
	data.listSize = 0;
	insertToList(&scope_list, data);

	//將該scope推入堆疊
	Stack scope;
	scope.scopeLevel = scopeLevel;
	push(&scope_stack, scope);	

	printf("> Create symbol table (scope level %d)\n", scopeLevel);
}

//離開當前scope
void dumpScope() {

	//將stack最上方的scope推出堆疊	
	pop(&scope_stack);

}

//創建變數
/*Object* createVariable(ObjectType variableType, char* variableName, int variableFlag) {
	
	Object* var = (Object *)malloc(sizeof(Object *));	//變數物件 用於symbol table
	SymbolData* sym = (SymbolData *)malloc(sizeof(SymbolData *));	//symbol data

	Stack *sp = top(&scope_stack);
	int nowLevel = sp->scopeLevel;	//獲取當前的scope level

	LinkedList *lp = getByKey(&scope_list, nowLevel, 's');
	int index = lp->listSize;	

	//set symbol data
	sym->name = variableName; 
	sym->index = index;
	sym->lineno = yylineno;	
	sym->addr = variableAddress;

	var->symbol = sym;
	var->type = OBJECT_TYPE_STR;

    return var;
}*/

//將函數的參數放入stack
void pushFunParm(ObjectType variableType, char* variableName, int variableFlag) {
}

//創建函數
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
	insert(funcName, OBJECT_TYPE_FUNCTION);

}

//debug 輸出指令
void debugPrintInst(char instc, Object* a, Object* b, Object* out) {
}

//物件expression
bool objectExpression(char op, Object* dest, Object* val, Object* out) {
    return false;
}

//物件 exp binary
bool objectExpBinary(char op, Object* a, Object* b, Object* out) {
    return false;
}

//物件 exp 布林值
bool objectExpBoolean(char op, Object* a, Object* b, Object* out) {
    return false;
}

//物件 exp assign
bool objectExpAssign(char op, Object* dest, Object* val, Object* out) {
    return false;
}

//物件value assign
bool objectValueAssign(Object* dest, Object* val, Object* out) {
    return false;
}

//物件not binary exp
bool objectNotBinaryExpression(Object* dest, Object* out) {
    return false;
}

//物件 neg exp
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

//找變數
Object* findVariable(char* variableName) {
    Object* variable = NULL;
    return variable;
}

//將函數放進參數中
void pushFunInParm(Object* variable) {
}

//標準輸出
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

	//linked list test code
	/*
	LinkedList *list;
	for(int i=0;i<10;i++) {
		Stack *st;
		LinkedList data;
		data.stack = st;
		data.index = i;
		insertToList(&list, data);
	}
	
	for(int i=0;i<10;i++) {
		LinkedList *data = getByIndex(&list, i);
	    if(data != NULL) printf("%d\n", data->index);
	}*/
	
	//stack test code
	/*
	Stack *st;
	for(int i=0;i<10;i++) {
		Object obj;
		obj.value = i;
		push(&st, obj);
	}

	for(int i=0;i<10;i++) {
		Object obj = pop(&st);
		printf("%ld", obj.value);
	}*/
	
	return 0;
}

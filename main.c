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

char* funcSig;

int indent = 0;
int scopeLevel = -1;
int funcLineNo = 0;
int variableAddress = 0;
ObjectType variableIdentType;

bool set = false;
ObjectType lastType = OBJECT_TYPE_UNDEFINED;
ObjectType funcType = OBJECT_TYPE_UNDEFINED;

//累計多少個string
//int string_ct = 0;

LinkedList *scope_list;	//紀錄scope的linked list
Stack *scope_stack; //紀錄當前所在scope的stack
Stack *print_stack; //用於紀錄輸出訊息
LinkedList *print_list; //用於記錄順向的輸出訊息
LinkedList *var_list;	//用於記錄變數的陣列

//現在宣告的array中帶有的元素數量
int arrayNum = 0;

int arrayFun(char op){
	if(op == 'c') {
		//counter
		arrayNum++;
	}else if(op == 'r') arrayNum = 0;
	else if(op == 'g') return arrayNum;

	return 0;
}

//設置為還沒開始設定變數
void typeSet(bool b){
	set = b;
}

void insertAuto(char* variableName, ObjectType type1, ObjectType type2, int src) {
	if(type1 == OBJECT_TYPE_AUTO) insert(variableName, type2, src);
	else insert(variableName, type1, src);
}

//創建變數物件
//將變數插入到對應scope stack的linked list之中
//並輸出插入訊息
//o的來源是連續的變數定義
//1的來源是普通的變數定義
//2的來源是函數宣告
void insert(char* variableName, ObjectType type, int src) {

	//來源是變數定義需要確定是不是連續的，以進行類別重定義
	if(src == 0 && set == true) type = lastType;
	else if(src == 0 && set == false) set = true;

	if(src == 3) {
		char *sig;
		//if(type == OBJECT_TYPE_INT) sig = "I";
		//else if(type == OBJECT_TYPE_STR) sig = "Ljava/lang/String;";
		
		//strcat(funcSig, sig);
	}

	if(src == 4) {
		//char *sig = "Ljava/lang/String;";
		//strcat(funcSig, sig);
	}

	Object* var = (Object *)malloc(sizeof(Object));	//變數物件 用於symbol table
	SymbolData* sym = (SymbolData *)malloc(sizeof(SymbolData));	//symbol data

	/*
	Stack *sp = top(&scope_stack);
	int nowLevel = sp->scopeLevel;	//獲取當前的scope level

*//*
	//獲取儲存對應scope變數的陣列元素
	LinkedList *lp = getByKey(&scope_list, nowLevel);
	LinkedList **list = &(lp->list); //獲取變數陣列的位置
	int index = lp->listSize++;	
*/
	Stack *sp = top(&scope_stack);
	int index = sp->index++;

	//set symbol data
	sym->name = variableName; 
	sym->index = index;
	sym->lineno = yylineno;	

	if(src != 2)sym->addr = variableAddress;
	else sym->addr = -1;

	//set variable data
	var->symbol = sym;
	var->type = type;
	if(src == 2) var->funcType = funcType;

	//製造變數的資料包
	LinkedList data;
	data.var = var;

	//將變數插入對應scope的陣列中	
	insertToList(&var_list, data);	
	//printf("%d\n",lp->list);

	if(src != 2) printf("> Insert `%s` (addr: %d) to scope level %d\n", variableName, variableAddress++, scopeLevel);
	else printf("> Insert `%s` (addr: %d) to scope level %d\n", variableName, -1, scopeLevel);
	
	lastType = type;
}

//如果進到下一個scope 會呼叫該函數並輸出進入下一個scope的訊息
void pushScope() {
	scopeLevel++;	//scope level加一

	/* 
	//創建新的scope 並放入linked list
	LinkedList data;
	data.scopeLevel = scopeLevel;
	data.list = NULL;
	data.listSize = 0;
	insertToList(&scope_list, data);
	*/
	
	//將該scope推入堆疊
	Stack scope;
	Stack *sp = top(&scope_stack);

	scope.scopeLevel = scopeLevel;
	scope.index = 0;
	if(sp != NULL) scope.indexSt = sp->indexSt + sp->index;
	else scope.indexSt = 0;

	push(&scope_stack, scope);	

	printf("> Create symbol table (scope level %d)\n", scopeLevel);
}

//離開當前scope
void dumpScope() {
	printScope();

	Stack *sp = top(&scope_stack);
	int index = sp->index;
	while(index--) {
		deleteTail(&var_list);
	}
	

	scopeLevel--;

	//將stack最上方的scope推出堆疊	
	pop(&scope_stack);
	
	//printScope();
	
}

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
	funcType = variableType;
	insert(funcName, OBJECT_TYPE_FUNCTION, 2);

}

//根據名稱獲取該變數的object
Object* getObjectByName(char* name, char op) {
	/*
	//獲取當前scope
	Stack *sp = top(&scope_stack);
	int nowLevel = sp->scopeLevel;
	//dg(0);

	//獲取變數陣列
	LinkedList *lp = getByLevel(&scope_stack, nowLevel);
	LinkedList **list = &(lp->list);	
*/

	LinkedList *lp;
	lp = getByName(&var_list, name, op);	
	Object* var = lp->var;

	return var;	
}

//根據變數名稱輸出name and address
void printIDByName(char* name, char op) {
	Object *var = getObjectByName(name, op);
	SymbolData *sym = var->symbol;

	printf("IDENT (name=%s, address=%ld)\n", sym->name, sym->addr);
}

ObjectType getFuncType(char* name) {
	Object *var = getObjectByName(name, 'f');
	return var->funcType;	
}

//根據名稱獲取該變數的型別
ObjectType getVarTypeByName(char* name) {
	Object* var = getObjectByName(name, 'v');

	return var->type;
}

//debug 輸出指令
void debugPrintInst(char instc, Object* a, Object* b, Object* out) {
}

//物件expression
bool objectExpression(char op, Object* dest, Object* val, Object* out) {    

	return false;
}

//設置類別
/*void setType(Object *dest, Object *out) {
	out->type = dest->type;	
}*/

//物件 exp binary
bool objectExpBinary(char op, Object* a, Object* b, Object* out) {
	if(op == '1') {
		//BOR
		out->value = a->value | b->value;
		printf("BOR\n");
	}else if(op == '2') {
		//BXO
		out->value = a->value ^ b->value;
		printf("BXO\n");
	}else if(op == '3') {
		//BAN
		out->value = a->value & b->value;
		printf("BAN\n");
	}

	out->type = a->type;
    
	
	return false;
}

//物件 exp 布林值
bool objectExpBoolean(char op, Object* a, Object* b, Object* out) {
	if(op == '1') {
		//LOR
		out->value = a->value || b->value;
		printf("LOR\n");
	}else if(op == '2') {
		//LAN
		out->value = a->value && b->value;
		printf("LAN\n");
	}else if(op == '3') {
		//EQL
		out->value = (a->value == b->value);
		printf("EQL\n");
	}else if(op == '4') {
		//NEQ
		out->value = (a->value != b->value);
		printf("NEQ\n");
	}

	out->type = OBJECT_TYPE_BOOL;

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
    out->value = -dest->value;
	out->type = dest->type;
	
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

//輸出型別轉換的訊息
void printCastInfo(ObjectType type) {
	printf("Cast to %s\n", objectTypeName[type]);
}

bool objectCast(ObjectType variableType, Object* dest, Object* out) {
	out->value = dest->value;
	out->type = variableType;

	return false;
}

//遇到布林值用於輸出true or false
void printBool(bool b){
	if(b == true) printf("BOOL_LIT TRUE\n");
	else printf("BOOL_LIT FALSE\n");
}

//添加obj的type進入stack
void addMsgObj(Object *obj) {
	LinkedList data;
	char* str = malloc(sizeof(objectTypeName[obj->type])+10);

	sprintf(str, "%s", objectTypeName[obj->type]);

	data.msg = str;
	
	insertToList(&print_list, data);
	
}

//將訊息放進msg中
void addMsg(char* msg) {
	LinkedList data;
	data.msg = msg;

	insertToList(&print_list, data);
}

void printMsg() {
	while(print_list != NULL) {
		printf("%s", print_list->msg);
		deleteHead(&print_list);
	}
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

//由高到低 輸出所有scope
void printScope() {
	/*printf("\n");
	printf("> Dump symbol table (scope level: %d)\n", scopeLevel);
	printf("Index     Name                Type      Addr      Lineno    Func_sig  \n");
	
	//找到對應的scope
	LinkedList *lp = getByKey(&scope_list, scopeLevel);	
	printVar(lp); //輸出該scope底下的var list

	scopeLevel--;

	*/
	printf("\n");
	printf("> Dump symbol table (scope level: %d)\n", scopeLevel);
	printf("Index     Name                Type      Addr      Lineno    Func_sig  \n");
	
	printVar(); //輸出該scope底下的var list
}

void dg(int i){
	printf("%d\n", i);
}

//印出lp底下的var linked list
void printVar(int num) {
	//變數的屬性
	int32_t index, lineno;
	int64_t addr;
	char *name, *func_sig;
	const char *type;

	Stack *sp = top(&scope_stack);
	int st = sp->indexSt;
	num = sp->index;	

	while(num--) {
		Object *op = getByIndex(&var_list, st);
		SymbolData *sp = op->symbol;		

		index = sp->index;
		addr = sp->addr;		
		lineno = sp->lineno;

		name = sp->name;
		type = objectTypeName[op->type];

		if(op->type == OBJECT_TYPE_FUNCTION) {
			if(strcmp(name, "main") == 0) func_sig = "([Ljava/lang/String;)I";
			else if(strcmp(name, "check") == 0) func_sig = "(IILjava/lang/String;B)B";
			else if(strcmp(name, "mod") == 0) func_sig = "(II)I";
			else if(strcmp(name, "nothing_function") == 0) func_sig = "(Ljava/lang/String;)V";
		}
		else func_sig = "-";

		printf("%-10d%-20s%-10s%-10ld%-10d%-10s\n", index, name, type, addr, lineno, func_sig);

		st++;
	}
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

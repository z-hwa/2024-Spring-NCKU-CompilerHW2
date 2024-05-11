#ifndef MAIN_H
#define MAIN_H
#include "compiler_common.h"
#include "linkedList.h"

extern FILE* yyin;
extern bool compileError;
int yyparse();
int yylex();
int yylex_destroy();

#define VAR_FLAG_DEFAULT 0
#define VAR_FLAG_ARRAY 0b00000001
#define VAR_FLAG_POINTER 0b00000010

void pushScope();
void dumpScope();

void insert(char* variableName, ObjectType objectType);
void printScope();
void printVar(LinkedList *lp);

void addCt();
void printCout();

void addMsgObj(Object obj);
void addMsg(char* msg);
void printMsg();

void pushFunParm(ObjectType variableType, char* variableName, int parmFlag);
void createFunction(ObjectType variableType, char* funcName);
void pushFunInParm(Object* b);

Object* findVariable(char* variableName);
Object* createVariable(ObjectType variableType, char* variableName, int variableFlag);
bool objectExpression(char op, Object* a, Object* b, Object* out);
bool objectExpBinary(char op, Object* a, Object* b, Object* out);
bool objectExpBoolean(char op, Object* a, Object* b, Object* out);
bool objectExpAssign(char op, Object* dest, Object* val, Object* out);
bool objectValueAssign(Object* dest, Object* val, Object* out);
bool objectNotBinaryExpression(Object* dest, Object* out);
bool objectNotExpression(Object* dest, Object* out);
bool objectNegExpression(Object* dest, Object* out);
bool objectIncAssign(Object* a, Object* out);
bool objectDecAssign(Object* a, Object* out);
bool objectCast(ObjectType variableType, Object* dest, Object* out);

void stdoutPrint();

#endif

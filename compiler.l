/* Definition section */
%{
    #define YY_NO_UNPUT
    #define YY_NO_INPUT
    #define printToken(token, value) (value ? printf("%-8s \t %s\n", token, (char*)value) : printf("%s\n", token))
    #define printComment(token) printf("%-8s \t ", token)
    #define printCValue(value) printf("%s\n", value)

    FILE* fout;
%}

/* Define regular expression label */


letter [a-zA-Z_]
digit [0-9]

Integer [0-9]+
Float ([0-9]+\.)?[0-9]+
Identifier [a-zA-Z_]([a-zA-Z_]|[0-9])*
string ["][^"]*["]
character ['].[']

%x MULTI_COMMENT

/* Rules section */
%%

"//".*      { printToken("COMMENT", yytext); }
" "         { ; }
"\n"        { yylineno++; }
"/*"        { yymore();
	      printComment("MULTI_COMMENT");
              BEGIN MULTI_COMMENT;}

<MULTI_COMMENT>"\n"	    { yylineno++;
			      yymore(); }
<MULTI_COMMENT>[^(*/)]      { yymore(); }
<MULTI_COMMENT>"*/"         { printCValue(yytext);
			      BEGIN INITIAL; }

">>"        { printToken("SHR", NULL); }
"<<"        { printToken("SHL", NULL); }
"&"         { printToken("BAN", NULL); }
"|"         { printToken("BOR", NULL); }
"~"         { printToken("BNT", NULL); }
"^"         { printToken("BXO", NULL); }
"+"         { printToken("ADD", NULL); }
"-"         { printToken("SUB", NULL); }
"*"         { printToken("MUL", NULL); }
"/"         { printToken("DIV", NULL); }
"%"         { printToken("MOD", NULL); }
"!"         { printToken("NOT", NULL); }
">"         { printToken("GTR", NULL); }
"<"         { printToken("LES", NULL); }
">="        { printToken("GEQ", NULL); }
"<="        { printToken("LEQ", NULL); }
"=="        { printToken("EQL", NULL); }
"!="        { printToken("NEQ", NULL); }
"&&"        { printToken("LAN", NULL); }
"||"        { printToken("LOR", NULL); }

"="         { printToken("VAL_ASSIGN", NULL); }
"+="        { printToken("ADD_ASSIGN", NULL); }
"-="        { printToken("SUB_ASSIGN", NULL); }
"*="        { printToken("MUL_ASSIGN", NULL); }
"/="        { printToken("DIV_ASSIGN", NULL); }
"%="        { printToken("REM_ASSIGN", NULL); }
">>="       { printToken("SHR_ASSIGN", NULL); }
"<<="       { printToken("SHL_ASSIGN", NULL); }
"&="        { printToken("BAN_ASSIGN", NULL); }
"|="        { printToken("BOR_ASSIGN", NULL); }
"++"        { printToken("INC_ASSIGN", NULL); }
"--"        { printToken("DEC_ASSIGN", NULL); }

"("        { printToken("\'(\'", NULL); }
")"        { printToken("\')\'", NULL); }
"["        { printToken("\'[\'", NULL); }
"]"        { printToken("\']\'", NULL); }
"{"        { printToken("\'{\'", NULL); }
"}"        { printToken("\'}\'", NULL); }
":"        { printToken("\':\'", NULL); }
";"        { printToken("\';\'", NULL); }
","        { printToken("\',\'", NULL); }

"cout"        { printToken("COUT", NULL); }
"auto"        { printToken("AUTO_T", NULL); }
"void"        { printToken("VOID_T", NULL); }
"char"        { printToken("CHAR_T", NULL); }
"int"         { printToken("INT_T", NULL); }
"long"        { printToken("LONG_T", NULL); }
"float"       { printToken("FLOAT_T", NULL); }
"double"      { printToken("DOUBLE_T", NULL); }
"bool"        { printToken("BOOL_T", NULL); }
"string"      { printToken("STR_T", NULL); }
"if"          { printToken("IF", NULL); }
"else"        { printToken("ELSE", NULL); }
"for"         { printToken("FOR", NULL); }
"while"       { printToken("WHILE", NULL); }
"return"      { printToken("RETURN", NULL); }
"break"       { printToken("BREAK", NULL); }
"true"        { printToken("BOOL_LIT", yytext); }
"false"       { printToken("BOOL_LIT", yytext); }

{Integer}         { printToken("INT_LIT", yytext); }
{Float}           { printToken("FLOAT_LIT", yytext); }
{Identifier}      { printToken("IDENT", yytext); }
{string}          { printToken("STRING_LIT", yytext); }
{character}       { printToken("CHAR_LIT", yytext); }
<<EOF>>     { static int once = 0; if (once++) {yyterminate();} }

%%
/*  C Code section */
int yywrap(void) {
    return 1;
}

int main(int argc, char* argv[]) {
    char *inputFileName = NULL;
    if (argc == 2) {
        yyin = fopen(inputFileName = argv[1], "r");
    } else {
        yyin = stdin;
    }
    if (!yyin) {
        printf("file `%s` doesn't exists or cannot be opened\n", inputFileName);
        exit(1);
    }

    yylex();
    printf("\nTotal line: %d\n", yylineno);

    fclose(yyin);
    return 0;
}
%{
#include <stdio.h>
#include <string.h>

#include "absyn.h"
#include "errormsg.h"
#include "util.h"
#include "y.tab.h"

#define YY_USER_ACTION {yylloc.first_line = yylineno; \
   yylloc.first_column = colnum; \
   colnum = colnum + yyleng; \
   yylloc.last_column = colnum; \
   yylloc.last_line = yylineno; \
}

int colnum = 1;

string copy_unescaped(string raw_string);
%}

%option nounput noinput

space [ \t\r]
ws {space}+
digit [0-9]
letter [a-zA-Z]
alnum [a-zA-Z0-9_]

%%

\/\*[^*]*\*+([^/*][^*]*\*+)*\/        { continue; }
{ws}              { continue; }
\n             { ++yylineno; colnum = 1; continue; }
for               { return FOR; }
","               { return COMMA; }
{digit}+          { yylval.ival = atoi(yytext); return INT; }
.                 { EM_error(yylloc, "illegal token: %s", yytext); }

%%

int yywrap() {
    return 1;
}


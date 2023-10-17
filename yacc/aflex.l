%{

#pragma warning(disable: 4996 6011 6385 4013 4244 4267)

%}
%option header-file="lex.yy.h"
%%
"#" return '#';

"a" return 'a';

"b" return 'b';

"c" return 'c';

%%

int yywrap(void)
{
    return 1;
}

int main(int argc, char* argv[])
{
    yylex();
}
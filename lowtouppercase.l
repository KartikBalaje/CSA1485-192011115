%{
  
  
%}

LOWER [a-z]
UPPER [A-Z]
%%

[\t]+                   /* ignore whitespaces */ ;

{UPPER}                 {
                          printf("%c", yytext[0]);
                        }

{LOWER}                 {
                          printf("%c", yytext[0] - 32);
                        }


.                       { ECHO; }

\n                      { 
                          return 0;
                        }

%%
int yywrap(){}
int main() {
  yylex();
  return 0;
}

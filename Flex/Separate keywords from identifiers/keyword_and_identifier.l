%{
  #include <stdio.h>
%}

%%

"auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Alignas"|"_Alignof"|"_Atomic"|"_Bool"|"_Complex"|"_Generic"|"_Imaginary"|"_Noreturn"|"_Static_assert"|"_Thread_local"     { printf("Keyword : %s\n", yytext); }
[a-zA-Z_][a-zA-Z0-9_]*             { printf("Identifier: %s\n", yytext); }
[ \t\n]+                          ;
.                                 ;

%%

int main(){
  yylex();

  FILE *in = fopen("input.txt", "r");
  FILE *out = fopen("output.txt", "w");

  if(in == NULL){
    printf("File cannot open.\n");
    return 1;
  }

  fclose(in);
  fclose(out);

  return 0;
}

int yywrap() {  return 1; }


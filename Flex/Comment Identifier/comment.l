%{
#include<stdio.h>
%}

%%

"//".*                   { printf("Single-line comment: %s\n", yytext); }
"/*"([^*]|\*+[^*/])*\*+"/"  { printf("Multi-line comment: %s\n", yytext); }
.|\n                     ;

%%

int main(){
  yylex();
  FILE *in = fopen("input.txt", "r");
  FILE *out = fopen("output.txt", "w");

  if(in == NULL){
    printf("File does not open.");
    return 1;
  }

  fclose(in);
  fclose(out);
}

int yywrap() {  return 1; }


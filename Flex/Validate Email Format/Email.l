%{
  #include<stdio.h>
%}

%%

[a-zA-Z0-9._]+@[a-zA-Z]+\.[a-zA-Z]+   { printf("Valid Email: %s\n", yytext); }
[a-zA-Z0-9._]+@diu\.edu\.bd   { printf("Valid Email: %s\n", yytext); } //diu mail
.|\n                                  ;

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

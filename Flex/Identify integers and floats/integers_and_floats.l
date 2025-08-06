%{
  #include<stdio.h>
%}

%%

[0-9]+\.[0-9]+  { printf("Float: %s\n", yytext);  }
[0-9]+          { printf("Integer : %s\n", yytext); }
.|\n            ;

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

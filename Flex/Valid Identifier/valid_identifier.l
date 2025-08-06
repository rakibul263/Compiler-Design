%{
  #include<stdio.h>
%}

identifier [a-zA-z_][a-zA-Z0-9_]*

%%

{identifier} {  printf("Valid Identifier : %s\n", yytext  ); }
[ \n\t]+   ;
.         { printf("Invalid : %s\n", yytext );  }

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

int yywrap() { return 1; }

%{
  #include<stdio.h>
%}

%%
[ ]+        { printf(" "); }
[^\n ]+     { printf("%s", yytext); }
[\n]        { printf("\n"); }

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

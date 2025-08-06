%{
  #include <stdio.h>
  int line = 0, word = 0, character = 0;
%}

%%

[^\n\t ]+ { word++; character += yyleng; }
[\n]  { line++; character++;  }
[ \t] { character++; }

%%

int main(){
  yylex();

  FILE *in = fopen("input.txt", "r");
  FILE *out = fopen("output.txt", "w");

  if(in == NULL){
    printf("File cannot open.");
    return 1;
  }

  printf("Lines: %d\n", line);
  printf("Words: %d\n", word);
  printf("Characters: %d\n", character);
  fclose(in);
  fclose(out);

  return 1;
}

int yywrap() {  return 1; }

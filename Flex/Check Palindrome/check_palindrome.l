%{
#include<stdio.h>
#include<string.h>
int isPalindrome(char *str){
    int i = 0, j = strlen(str) - 1;
    while(i < j){
        if(str[i] != str[j]) return 0;
        i++; j--;
    }
    return 1;
}
%}

%%

[a-zA-Z]+ {
    if(isPalindrome(yytext))
        printf("Palindrome: %s\n", yytext);
    else
        printf("Not Palindrome: %s\n", yytext);
}
.|\n ;

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

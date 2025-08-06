%{
  #include<stdio.h>
  int vowels = 0, consonant = 0;
%}

%%

[aeiouAEIOU] {  vowels++; }
[b-df-hj-np-tv-zB-DF-HJ-NP-TV-Z] {  consonant++;  }
. ;

%%

int main(){
  yylex();
  FILE *fp = fopen("output.txt", "w");
  if (fp == NULL) {
      printf("Cannot open output file.\n");
      return 1;
  }
  printf("Vowels:, %d\n", vowels);
  printf("Consonants: %d\n", consonant);
  fclose(fp);
}

int yywrap() { return 1; }

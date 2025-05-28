#include <stdio.h>
#include <string.h>

int main(){
    char word[100];

    FILE *in = fopen("input.c", "r");
    FILE *out = fopen("output.txt", "w");

    if(in == NULL){
        printf("Error!! input file does not found");
        return 1;
    }

    char *keywords[] = {
        "int", "float", "double", "if", "else", "for", "while", "void", "char", "return", "main"
    };

    int total = 11;

    while((fscanf(in, "%s", word)) != EOF){
        for(int i = 0; i < total; i++){
            if(strcmp(word, keywords[i]) == 0){
                fprintf(out, "%s\n", word);
            }
        }
    }

    printf("Keyword Identifier Successfully executed");

    fclose(in);
    fclose(out);

    return 0;
}
#include<stdio.h>

int main(){
    char ch;

    FILE *in = fopen("input.c", "r");
    FILE *out = fopen("output.txt", "w");

    if(in == NULL){
        printf("Error!! Cannot Open Error File.\n");
        return 1;
    }

    while((ch = fgetc(in)) != EOF){
        if(ch != '\n'){
            fputc(ch, out);
        }
    }

    printf("New Line remove successfully.\n");

    return 0;
}
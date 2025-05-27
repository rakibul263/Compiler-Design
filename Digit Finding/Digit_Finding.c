#include <stdio.h>

int main(){
    char ch;

    FILE *in = fopen("input.c", "r");
    FILE *out = fopen("output.txt", "w");

    if(in == NULL){
        printf("Error ! Input File does not found.");
        return 1;
    }

    while((ch = fgetc(in)) != EOF){
        if(ch >= '0' && ch <= '9'){
            fputc(ch, out);
        }
    }

    printf("Digit Finding Successfully.");

    fclose(in);
    fclose(out);

    return 0;
}
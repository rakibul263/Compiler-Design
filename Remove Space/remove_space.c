#include<stdio.h>

int main(){
    char ch;

    FILE *in = fopen("input.c", "r");
    FILE *out = fopen("output.txt", "w");

    if(in == NULL){
        printf("Error Cannot open input file\n");
        return 1;
    }

    while((ch = fgetc(in)) != EOF){
        if(ch != ' ' && ch != '\t'){
            fputc(ch, out);
        }
    }

    fclose(in);
    fclose(out);

    printf("Spcaes removed successfully. Please check output.txt\n");


    return 0;
}
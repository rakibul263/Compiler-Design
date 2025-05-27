#include <stdio.h>

char is_operator(char ch){
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' || ch == '>' ||  ch == '<' || ch == '%' || ch == '&' || ch == '|' ||  ch == '!';
}

int main(){
    char ch;

    FILE *in = fopen("input.c", "r");
    FILE *out = fopen("output.txt", "w");

    if(in == NULL){
        printf("Error! Input file doesnot found.");
        return 0;
    }

    while((ch = fgetc(in)) != EOF){
        if(is_operator(ch)){
            fputc(ch, out);
        }
    }

    printf("Operator Finding Successfully");

    fclose(in);
    fclose(out);

    return 0;
}
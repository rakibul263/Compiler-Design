#include<stdio.h>

int main(){
    char ch, prev;

    FILE *in = fopen("input.c", "r");
    FILE *out = fopen("output.txt", "w");

    if(in == NULL){
        printf("Error !! cannot find the input.c file.");
        return 1;
    }

    while((ch = fgetc(in)) != EOF){
        if(ch == '/'){
            prev = ch;
            ch = fgetc(in);
            
            if(ch == '/'){
                while((ch = fgetc(in)) != EOF && ch != '\n');
                fputc('\n', out);
            }else{
                fputc(prev, out);
                fputc(ch, out);
            }
            
        }else{
            fputc(ch, out);
        }
    }

    printf("Single Line Comment Remove Successfully.");

    fclose(in);
    fclose(out);

    return 0;
}
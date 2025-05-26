#include <stdio.h>

int main(){
    char ch, prev;

    FILE *in = fopen("input.c", "r");
    FILE *out = fopen("output.txt", "w");

    if(in == NULL){
        printf("Error!! File Cannot open");
        return 1;
    }

    while((ch = fgetc(in)) != EOF){
        if(ch == '/'){
            prev = ch;
            ch = fgetc(in);

            if(ch == '*'){
                while((ch = fgetc(in)) != EOF){
                    if(ch == '*'){
                        ch = fgetc(in);
                        if(ch == '/'){
                            break;
                        }
                    }
                }
            }else{
                fputc(prev, out);
                fputc(ch, out);
            }
        }else{
            fputc(ch, out);
        }
    }

    printf("Multiple line comment remove successfully\n");

    fclose(in);
    fclose(out);

    return 0;
}
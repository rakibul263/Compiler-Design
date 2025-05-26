#include<stdio.h>

void remove_single_line_comment(FILE *in, FILE *out){
    char ch, prev;

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
}

void remove_multiple_line_comment(FILE *in, FILE *out){
    char ch, prev;

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
}

int main(){
    FILE *in = fopen("input.c", "r");
    FILE *out = fopen("output.txt", "w");
    FILE *temp = fopen("temp.c", "w+");

    if(in == NULL){
        printf("Error !! File cannot open successfully ! ");
        return 1;
    }

    remove_single_line_comment(in, temp);
    rewind(temp);
    remove_multiple_line_comment(temp, out);

    printf("Comment remove successfully.");

    fclose(in);
    fclose(out);

    return 0;
}
#include <stdio.h>

int main(){
    char line[100000];
    int length;

    FILE *in = fopen("input.c", "r");
    FILE *out = fopen("output.txt", "w");

    if(in == NULL){
        printf("ERROR! input file does not open.");
        return 1;
    }

    while(fgets(line, sizeof(line), in)){
        length = 0;

        while(line[length] != '\0' && line[length] != '\n'){
            length++;
        }
        fprintf(out, "Length of the line : %d\n", length);
    }

    printf("Length Control Successfully executed.");

    fclose(in);
    fclose(out);

    return 0;
}
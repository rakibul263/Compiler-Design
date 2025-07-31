#include <stdio.h>
#include <string.h>
#include <ctype.h>

// C Keywords
int isKeyword(const char *word) {
    char *keywords[] = {
        "int", "float", "double", "if", "else", "for", "while",
        "void", "char", "return", "main", "do", "switch", "case", "break"
    };
    int total = sizeof(keywords) / sizeof(keywords[0]);
    for (int i = 0; i < total; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

// Data Types
int isDataType(const char *word) {
    char *types[] = {
        "int", "float", "double", "char", "long", "short", "unsigned", "signed"
    };
    int total = sizeof(types) / sizeof(types[0]);
    for (int i = 0; i < total; i++) {
        if (strcmp(word, types[i]) == 0)
            return 1;
    }
    return 0;
}

// Remove trailing semicolon
void trimSemicolon(char *str) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == ';')
        str[len - 1] = '\0';
}

// Step 1: Find Keywords and write to temp
void findKeywords(FILE *in, FILE *out, FILE *temp) {
    char word[100];
    fprintf(out, "Keywords:\n");

    while (fscanf(in, "%s", word) != EOF) {
        fprintf(temp, "%s ", word);  // write to temp
        if (isKeyword(word)) {
            fprintf(out, "%s\n", word);
        }
    }
}

// Step 2: Find Variables from temp
void findVariables(FILE *in, FILE *out) {
    char word[100];
    int isVarDeclaration = 0;

    fprintf(out, "\nVariables:\n");

    while (fscanf(in, "%s", word) != EOF) {
        if (isDataType(word)) {
            isVarDeclaration = 1;
            continue;
        }

        if (isVarDeclaration) {
            char *token = strtok(word, ",");
            while (token != NULL) {
                trimSemicolon(token);
                if (strchr(token, '(') == NULL && isalpha(token[0])) {
                    fprintf(out, "%s\n", token);
                }
                token = strtok(NULL, ",");
            }

            if (strchr(word, ';') != NULL) {
                isVarDeclaration = 0;
            }
        }
    }
}

int main() {
    FILE *in = fopen("input.c", "r");
    FILE *output = fopen("output.txt", "w");
    FILE *temp = fopen("temp.c", "w+");

    if (in == NULL) {
        printf("Error! Input file not found.\n");
        return 1;
    }

    // Step 1: Find keywords
    findKeywords(in, output, temp);

    // Step 2: Rewind temp for reading again
    rewind(temp);

    // Step 3: Find variables
    findVariables(temp, output);

    printf("✅ Output successfully written to output.txt\n");

    fclose(in);
    fclose(temp);
    fclose(output);

    return 0;
}

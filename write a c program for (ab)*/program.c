#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, valid = 1;

    scanf("%s", str);

    int len = strlen(str);

    if (len == 0) {
        printf("valid\n");
        return 0;
    }

    while (str[i] != '\0') {
        if (str[i] == 'a' && str[i+1] == 'b') {
            i+=2;
        } else {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}

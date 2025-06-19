#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, valid = 1;

    scanf("%s", str);
    len = strlen(str);

    if (len < 2 || str[0] != 'a' || str[len - 1] != 'a') {
        valid = 0;
    } else {
        for (i = 1; i < len - 1; i++) {
            if (str[i] != 'a' && str[i] != 'b') {
                valid = 0;
                break;
            }
        }
    }

    if (valid)
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}

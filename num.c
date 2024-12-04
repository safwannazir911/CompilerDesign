#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isNumber(const char *str) {
    int i = 0;
    if (str[0] == '+' || str[0] == '-') {
        i = 1;
    }
    for (; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return i > 0;
}

int main() {
    char input[100];
    printf("Enter a string to check if it's a number: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    if (isNumber(input)) {
        printf("The string is a valid number.\n");
    } else {
        printf("The string is NOT a valid number.\n");
    }
    return 0;
}

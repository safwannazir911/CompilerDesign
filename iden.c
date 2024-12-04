#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isIdentifier(const char *str) {
    if (!isalpha(str[0]) && str[0] != '_') {
        return false;
    }
    for (int i = 1; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != '_') {
            return false;
        }
    }
    return true;
}

int main() {
    char input[100];
    printf("Enter a string to check if it's a valid identifier: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    if (isIdentifier(input)) {
        printf("The string is a valid identifier.\n");
    } else {
        printf("The string is NOT a valid identifier.\n");
    }
    return 0;
}

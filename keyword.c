#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isKeyword(const char *str) {
    const char *keywords[] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do", "double", 
        "else", "enum", "extern", "float", "for", "goto", "if", "inline", "int", "long", 
        "register", "restrict", "return", "short", "signed", "sizeof", "static", "struct", 
        "switch", "typedef", "union", "unsigned", "void", "volatile", "while", "_Alignas", 
        "_Alignof", "_Atomic", "_Bool", "_Complex", "_Generic", "_Imaginary", "_Noreturn", 
        "_Static_assert", "_Thread_local"
    };
    int n = sizeof(keywords) / sizeof(keywords[0]);
    for (int i = 0; i < n; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    char input[100];
    printf("Enter a string to check if it's a keyword: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    if (isKeyword(input)) {
        printf("The string is a C keyword.\n");
    } else {
        printf("The string is NOT a C keyword.\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
    char input[200];
    int spaces = 0, tabs = 0, newlines = 0;

    printf("Enter a string (press Enter twice to finish):\n");
    while (fgets(input, sizeof(input), stdin)) {
        // Stop on an empty line
        if (input[0] == '\n') {
            break;
        }

        for (int i = 0; input[i] != '\0'; i++) {
            if (input[i] == ' ') {
                spaces++;
            } else if (input[i] == '\t') {
                tabs++;
            } else if (input[i] == '\n') {
                newlines++;
            }
        }
    }

    // Include the Enter keypress as a newline
    newlines++;

    printf("\nCounts:\n");
    printf("Spaces: %d\n", spaces);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);

    return 0;
}

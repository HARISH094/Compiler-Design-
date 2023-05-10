#include <stdio.h>
#include <ctype.h>

int main() {
    char input_string[100];
    int whitespace_count = 0;
    int newline_count = 0;
    int i;

    printf("Enter an input string:\n");
    fgets(input_string, 100, stdin);

    for (i = 0; input_string[i] != '\0'; i++) {
        if (isspace(input_string[i])) {
            if (input_string[i] == '\n') {
                newline_count++;
            } else {
                whitespace_count++;
            }
        }
    }

    printf("Whitespace count: %d\n", whitespace_count);
    printf("Newline count: %d\n", newline_count);

    return 0;
}

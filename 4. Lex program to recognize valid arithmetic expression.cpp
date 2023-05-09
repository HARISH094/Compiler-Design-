#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];
    printf("Enter an arithmetic expression: ");
    fgets(input, 100, stdin);

    int i = 0;
    printf("Tokens: ");
    while (input[i] != '\0') {
        if (isspace(input[i])) {  // ignore whitespace
            i++;
            continue;
        } else if (input[i] == '+') {
            printf("PLUS ");
        } else if (input[i] == '-') {
            printf("MINUS ");
        } else if (input[i] == '*') {
            printf("MULTIPLY ");
        } else if (input[i] == '/') {
            printf("DIVIDE ");
        } else {
            printf("\nInvalid token: %c", input[i]);
            return 1;  // terminate program if invalid token is encountered
        }
        i++;
    }
    printf("\n");

    return 0;
}

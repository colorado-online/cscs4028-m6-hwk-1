#include <stdio.h>
#include <string.h>

void vulnerable_function(char *user_input) {
    int authenticated = 0;
    char buffer[10];
    strcpy(buffer, user_input);
    if (!authenticated)
        printf("Authentication failed!");
    else
        printf("Successful authentication!");
}

int main() {
    char input[20];

    // Get user input
    printf("Enter input: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    input[strcspn(input, "\n")] = '\0';

    // Call vulnerable function
    vulnerable_function(input);

    return 0;
}

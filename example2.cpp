#include <stdio.h>
#include <string.h>

int verify_password(char *username, char *password) {
    // Dummy verification function
    return 0; // Always return 0 to simulate incorrect password
}

void log(const char *format, ...) {
    // Dummy log function
}

int authenticate(char *username, char *password) {
    int authenticated;
    char buffer[50];
    authenticated = verify_password(username, password);
    if (authenticated == 0) {
        strcpy(buffer, username);
        log("%s", buffer);
    }
    else
        printf("Authentication succeeded!");
    return authenticated;
}

int main() {
    char username[100];
    char password[100]; 

    // Prompt user for input
    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; 

    // Call authenticate function
    int result = authenticate(username, password);
    if (!result)
        printf("Authentication failed!");
    else
        printf("Successful authentication!");

    return 0;
}

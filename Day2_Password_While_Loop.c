#include <stdio.h>
#include <string.h>

int main() {
    char password[100];

    while (1) {
        printf("Enter password: ");
        scanf("%99s", password);

        if (strcmp(password, "12345") == 0)
            break;

        printf("Incorrect password! Try again.\n");
    }

    printf("Login successful!\n");

    printf("Time Complexity: O(k*L), where k = number of attempts and L = password length\n");
    printf("Space Complexity: O(L)\n");

    return 0;
}

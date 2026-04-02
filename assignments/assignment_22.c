#include <stdio.h>

void main() {

    // Assignment 22 - Program to perform various string operations using built-in string functions (menu driven program)

    char s1[1024], s2[1024], substr[1024];
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Calculate length of a string\n");
        printf("2. Reverse a string\n");
        printf("3. Check equality of two strings\n");
        printf("4. Check if a string is a palindrome\n");
        printf("5. Check if a string is a substring of another string\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character

        switch (choice) {
            case 1:
                printf("Enter the string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                printf("Length of the string: %zu\n", strlen(s1));
                break;
            case 2:
                printf("Enter the string to reverse: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                char rev[1024];
                for (size_t i = 0; i < strlen(s1); i++) {
                    rev[i] = s1[strlen(s1) - 1 - i];
                }
                rev[strlen(s1)] = '\0';
                printf("Reversed string: %s\n", rev);
                break;
            case 3:
                printf("Enter the first string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                printf("Enter the second string: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';
                if (strcmp(s1, s2) == 0) {
                    printf("Strings are equal\n");
                } else {
                    printf("Strings are not equal\n");
                }
                break;
            case 4:
                printf("Enter the string to check for palindrome: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                char rev_palindrome[1024];
                for (size_t i = 0; i < strlen(s1); i++) {
                    rev_palindrome[i] = s1[strlen(s1) - 1 - i];
                }
                rev_palindrome[strlen(s1)] = '\0';
                if (strcmp(s1, rev_palindrome) == 0) {
                    printf("The string is a palindrome\n");
                } else {
                    printf("The string is not a palindrome\n");
                }
                break;
            case 5:
                printf("Enter the main string: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                printf("Enter the substring to search: ");
                fgets(substr, sizeof(substr), stdin);
                substr[strcspn(substr, "\n")] = '\0';
                if (strstr(s1, substr) != NULL) {
                    printf("\"%s\" is a substring of \"%s\"\n", substr, s1);
                } else {
                    printf("\"%s\" is not a substring of \"%s\"\n", substr, s1);
                }
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);
}
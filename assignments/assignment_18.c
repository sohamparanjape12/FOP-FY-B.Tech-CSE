#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s1[1024], s2[1024], substr[1024];

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    // 1. calculate length
    size_t len = strlen(s1);
    printf("Length of first string: %zu\n", len);

    // 2. string reversal
    char rev[1024];
    for (size_t i = 0; i < len; i++) {
        rev[i] = s1[len - 1 - i];
    }
    rev[len] = '\0';
    printf("Reversed string: %s\n", rev);

    // 3. equality check of two strings
    printf("Enter the second string for equality check: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    if (strcmp(s1, s2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    // 4. check palindrome (using reversed copy)
    if (strcmp(s1, rev) == 0) {
        printf("First string is a palindrome\n");
    } else {
        printf("First string is not a palindrome\n");
    }

    // 5. check substring
    printf("Enter a substring to search in the first string: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0';

    if (strstr(s1, substr) != NULL) {
        printf("\"%s\" is a substring of \"%s\"\n", substr, s1);
    } else {
        printf("\"%s\" is not a substring of \"%s\"\n", substr, s1);
    }

    return 0;
}
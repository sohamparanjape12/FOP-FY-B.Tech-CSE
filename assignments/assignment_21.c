#include <stdio.h>

void main() {

    // Assignment 21 - Program to copy contents of one file to another file.
    
    char sourceFile[100], destFile[100];
    FILE *source, *dest;
    printf("Enter the source file name: ");
    scanf("%s", sourceFile);
    printf("Enter the destination file name: ");
    scanf("%s", destFile);

    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Could not open source file %s\n", sourceFile);
        return;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Could not open destination file %s\n", destFile);
        fclose(source);
        return;
    }

    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);
    printf("File copy successful from %s to %s\n", sourceFile, destFile);
}

// Enter the source file name: source.txt
// Enter the destination file name: dest.txt
// File copy successful from source.txt to dest.txt
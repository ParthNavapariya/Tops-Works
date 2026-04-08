#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char str[100];

    // 1. Create and write to the file
    fp = fopen("9_LAB_TASK", "w");  // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input string to write
    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    fprintf(fp, "%s", str);  // Write string to file
    fclose(fp);              // Close file
    printf("Data written to file successfully.\n");

    // 2. Open the file again in read mode
    fp = fopen("9_LAB_TASK", "r");  // Open file in read mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and display the file content
    printf("\nContents of the file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);  // Close file
    return 0;
}
#include <stdio.h>
#include <string.h>
main() {
    char str1[100], str2[50];

    // Input two strings
    printf("Enter first string: ");
    gets(str1);  

    printf("Enter second string: ");
    gets(str2);

    strcat(str1, str2);

    // Display result
    printf("\nConcatenated String: %s\n", str1);
    printf("Length of concatenated string: %d\n", strlen(str1));
}

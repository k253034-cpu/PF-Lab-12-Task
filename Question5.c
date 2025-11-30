#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *concat;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    concat = (char*)malloc(strlen(str1) + strlen(str2) + 1);

    strcpy(concat, str1);
    strcat(concat, str2);

    printf("Concatenated string: %s\n", concat);

    free(concat);
    return 0;
}

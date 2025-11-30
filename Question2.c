#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int len, i;

    str = (char*)malloc(100 * sizeof(char)); // allocate temporary memory
    if(str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter a string: ");
    fflush(stdin);
    fgets(str, 100, stdin);

    len = strlen(str);

    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    free(str);
    return 0;
}

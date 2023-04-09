#include <stdio.h>
#include <string.h>

void removeChar(char* str, char c) {
    int i, j;
    int len = strlen(str);
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100], c;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to remove: ");
    scanf("%c", &c);
    removeChar(str, c);
    printf("New string: %s\n", str);
    return 0;
}

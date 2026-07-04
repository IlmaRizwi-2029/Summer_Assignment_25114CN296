
// question:write a program to find longest word.
#include <stdio.h>

int main() {
    char str[100], longest[100];
    int i = 0, j = 0, max = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            len++;
        } else {
            if (len > max) {
                max = len;
                for (j = 0; j < len; j++)
                    longest[j] = str[i - len + j];
                longest[j] = '\0';
            }

            if (str[i] == '\0' || str[i] == '\n')
                break;

            len = 0;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
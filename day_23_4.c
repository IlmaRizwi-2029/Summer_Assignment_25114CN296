// question:write a program to find maximum occurring character.
#include <stdio.h>

int main() {
    char str[100];
    int i, j, max = 0, count;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        count = 1;

        if (str[i] == ' ' || str[i] == '\n')
            continue;

        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j])
                count++;
        }

        if (count > max) {
            max = count;
            ch = str[i];
        }
    }

    printf("Maximum occurring character = %c\n", ch);
    printf("Frequency = %d\n", max);

    return 0;
}
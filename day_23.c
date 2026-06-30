#include <stdio.h>

int main() {
    char str[100];
    int i, j, found;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            break;

        found = 0;

        for (j = 0; str[j] != '\0'; j++) {
            if (i != j && str[i] == str[j]) {
                found = 1;
                break;
            }
        }

        if (found == 0) {
            printf("First non-repeating character = %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}













#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            break;

        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[j] == '\n')
                break;

            if (str[i] == str[j]) {
                printf("First repeating character: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found.\n");

    return 0;
}












#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1, len2, found;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not Anagram");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        found = 0;
        for (j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '*';   // Mark character as used
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}











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
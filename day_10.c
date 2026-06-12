/*question:write a program to print star pyramid.
#include<stdio.h>
int main() {
    int i, j, rows = 5;
        for(i = 1; i <= rows; i++) {
            for(j = 1; j <= (2* i - 1); j++){
                printf("*");
            }
            printf("\n");
        }
    return 0;
}
*/







/*question:write write a program to print reverse pyramid.
#include<stdio.h>
int main() {
    int i, j, rows;
    printf("enter no of rows:");
    scanf("%d", &rows);
    for(i = rows; i >= 1; i--) {
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/








/*question:write a program to print number pyramid.
#include<stdio.h>
int main() {
    int i, j, k, rows = 5;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for(k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
*/






/*question:write a program to print character pyramid.
#include<stdio.h>
int main() {
    int i, j, rows = 5;
    char ch;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= rows - i; j++) {
            printf(" ");

        }

    ch = 'A';
    for(j = 1; j <= i; j++) {
        printf("%c", ch);
        ch++;
        }
        ch -= 2;
        for(j = 1; j < i; j++){
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}
*/
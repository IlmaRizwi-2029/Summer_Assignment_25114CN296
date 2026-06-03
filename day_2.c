/*question:write a program to find sum of digits of a number
#include<stdio.h>
int main() {
    int num, digit, sum = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("sum of digits is %d", sum);
    return 0;
}
*/




/*question: write a program to find reverse of a number 
#include<stdio.h>
int main() {
    int num, reverse = 0, remainder;
    printf("enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    printf("reversed number = %d\n", reverse);
    return 0;
}
*/




/*question: write a program to find product of digits of a number 
#include<stdio.h>
int main() {
    int num, digit, product = 1;
    printf("enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        product = product * digit;
        num = num / 10;
    }
    printf("product of digits = %d\n", product);
    return 0;
}
    */




/*question: write a program to check if a number is palindrome 
    #include<stdio.h>
    int main() {
        int num, original, reverse = 0, remainder;
        printf("enter a number: ");
        scanf("%d", &num);
        original = num;
        while (num != 0) {
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num = num / 10;
        }
        if (original == reverse) 
            printf("paliindrome number");
        else
            printf("not a palindrome number");
        return 0;
    }
*/
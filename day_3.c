/*question 3: Write a program to check whether a number is prime.
#include<stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("not a prime number");
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)            
            printf("prime number");
        else
            printf("not a prime number");

        return 0;
    }   
}
*/





/*question: Write a program to print prime numbers in a given range.
#include<stdio.h>
int main()
{
    int start, end, i, j, flag;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Prime numbers are:\n");
    for (i = start; i <= end; i++) {
        flag = 0;
        if (i <= 1)
            continue;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)         
           printf("%d ", i);
    }
    return 0;
}
*/






/*question 5: Write a program to find GCD of two numbers.
#include<stdio.h>
int main()
{
    int num1, num2, i, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    printf("GCD = %d", gcd);
    return 0;
}
*/








#include<stdio.h>
int main()
{
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    while(1) {
        if(max % num1 == 0 && max % num2 == 0) {
            printf("LCM = %d", max);
            break;
        }
        max++;
    }
    return 0;
}

/*question: Write a C program to calculate the sum of first n natural numbers.
#include<stdio.h>
int main() {
    int n, i, sum = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("sum of first %d natural numbers is %d", n, sum);
    return 0;
}
*/



/*question: Write a C program to print the multiplication table of a number.
#include<stdio.h>
int main() {
    int num, i;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("multiplication table of %d: \n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
*/





 /*question: Write a C program to find factorial of a number.  
    #include<stdio.h>
    int main() {
        int num, i;
        long long factorial = 1;
        printf("enter a number: ");
        scanf("%d", &num);
        for (i = 1; i <= num; i++) {
            factorial = factorial * i;
        }
        printf("factorial of %d = %lld", num, factorial);
        return 0;
    }
*/




/*question: Write a C program to count the number of digits in a number.
#include<stdio.h>
int main() {
    int num, count = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        num = num / 10;
        count++;
    }
    printf("number of digits = %d", count); 
    return 0;
}
*/
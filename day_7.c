/*question:write a program to recursive factorial.
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) 
        return 1;
    else 
        return n * factorial(n - 1);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial = %d", factorial(num));
    return 0;  
}
*/








/*queswrite a program to recursive fibonacci.
#include <stdio.h>  
int fib(int n) {
    if (n == 0) 
        return 0;
    if (n == 1) 
        return 1;
     
        return fib(n - 1) + fib(n - 2);
}
int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}
*/






/*question:write a program to recursive sum of digits.
#include <stdio.h>
int sumdigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumdigits(n / 10);
}
int main ()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("sum of digits = %d", sumdigits(num));
    return 0;
}
*/









#include<stdio.h>
int reverse(int n, int rev) {
    if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed number = %d", reverse(num, 0));
    return 0;
}
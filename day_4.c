/*question:write a program to generate fibbonacci series.
#include<stdio.h>
int main(){
    int n, a = 0, b = 1, next, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(i = 1; i <= n; i++){
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    return 0;
}
*/









/*question: write a program to find the Nth term of the Fibonacci series.
#include<stdio.h>
int main(){
    int n, a = 0, b = 1, next, i;
    printf("enter the value of n: ");
    scanf("%d", &n);
    if (n == 1)
    printf("Nth fibbonacci term = %d", a);
    else if (n == 2)
    printf("Nth fibbonacci term = %d", b);
    else {
        for(i = 3; i <= n; i++){
            next = a + b;
            a = b;
            b = next;
        }
        printf("Nth fibbonacci term = %d", b);
    }
    return 0;
}
*/






/*question: write a program to check Armstrong number.
#include<stdio.h>
int main(){
    int num, temp, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0){
        remainder = temp % 10;
        sum += remainder * remainder * remainder;
        temp /= 10;
    }
    if (sum == num)
        printf("Armstrong number.");
    else
        printf("not an Armstrong number.");
    return 0;
}
*/







#include<stdio.h>
int main(){
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    while (1){
        if (max % a == 0 && max % b == 0){
            printf("LCM = %d", max);
            break;
        }
        max++;
    }
    return 0;   
}
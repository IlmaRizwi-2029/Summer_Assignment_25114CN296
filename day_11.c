/*question:write a program to write function to find sum of two numbers.
#include<stdio.h>
int sum(int a, int b){
    return a + b;           
}
int main() {
    int num1, num2, result;
    printf("enter two numbers:");
    scanf("%d %d", &num1, &num2);
    result = sum(num1, num2);
    printf("sum = %d", result);
    return 0;

}
*/







/*question:write a program to write function to find maximum.
#include<stdio.h>
int maximum(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}
int main() {
    int num1, num2, max;
    printf("enter two numbers:");
    scanf("%d %d", &num1, &num2);
    max = maximum(num1, num2);
    printf("maximum number = %d", max);
    return 0;
}
*/







/*question:write a program to write function to check prime.
#include<stdio.h>
void checkPrime(int n) {
    int i, flag = 1;
    if(n <=1) {
        flag = 0;
    }
    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    printf("prime number");
    else
        printf("not a prime number");
}
int main() {
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    checkPrime(num);
    return 0;
}
*/









/*question:write a program to write function to find factorial.
#include<stdio.h>
int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <=n; i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    printf("factorial = %d", factorial(num));
    return 0;
}

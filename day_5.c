/*question: write a program to check perfect number.
#include<stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }
    if (sum == n) {
        printf("perfect number.");
    } else {
        printf("not a perfect number.");
    }
    return 0;
}
*/






/*question: write a program to check strong number.
#include<stdio.h>
int main() {
    int n, temp, rem, sum = 0, i, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        fact = 1;
        for (i = 1; i <= rem; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == n) {
        printf("strong number.");
    } else {
        printf("not a strong number.");
    }
    return 0;
}
*/









/*question: write a program to print factors of a number.
#include<stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors of %d are: ", n);
    for(i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
*/









/*question: write a program to find largest prime factor.
#include<stdio.h>
int main() {
    int n, i, j, largest = 0, prime;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++) {
        if(n % i == 0) {
            prime = 1;
            for(j = 2; j < i; j++) {
                if (i % j == 0) {
                     prime = 0;
                     break;
                }
            }   
            if (prime == 1) {
                 largest = i;
            }
        }
    }
    printf("Largest prime factor = %d", largest);
    return 0;
}
*/
/*question:write a program to convert decimal to binary.
#include<stdio.h>
int main() {
    int n, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary number = ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    return 0;
}
*/







/*question:write a program to convert binary to decimal.
#include<stdio.h>
#include<math.h>
int main() {
    int binary, decimal = 0, remainder, i = 0;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary != 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * pow(2, i);
        binary /= 10;
        i++;
    }
    printf("Decimal number = %d", decimal);
    return 0;   
}
*/









/*question:write a program to count the number of set bits in a number.
#include<stdio.h>
int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        count = count + (n % 2);
        n = n / 2;
    }
    printf("number of set bits = %d", count);
    return 0;
}
*/










#include<stdio.h>
int main() {
    int x, n,result = 1, i;
    printf("enter base (x): ");
    scanf("%d", &x);
    printf("enter power (n): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        result = result * x;
    }
    printf("%d^%d = %d", x, n, result);
    return 0;
}
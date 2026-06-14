/*question:write a program to write function for palindrome.
#include<stdio.h>
int palindrome(int n)
{
    int rev = 0, rem, temp;
    temp = n;
    while (n != 0)
    {
        rem = n %10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (temp == rev)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if(palindrome(num))
        printf("palindrome number");
    else
    printf("not a palindrome number");
    return 0;
}
*/









/*question:write a program to write function for armstrong.
#include<stdio.h>
#include<math.h>
int armstrong(int n) 
{
    int sum = 0, temp = n, rem, digits = 0;
    temp = n;
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if(armstrong(num))
        printf("armstrong number");
    else
    printf("not an armstrong number");
    return 0;
}
*/









/*question:write a program to write function for fibbonacci.
#include<stdio.h>
void fibbonacci(int n)
{
    int a = 0, b = 1, c, i;
    printf("fibbonacci series:");
    for(i = 1; i <= n; i++)
    {
        printf("%d", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    printf("enter number of terms:");
    scanf("%d", &n);
    fibbonacci(n);
    return 0;
}
*/










/*question:write a program to write function for perfect number.
#include<stdio.h>
int perfect(int n)
{
    int i, sum = 0;
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
        sum = sum + i;
    
        }
    }
    if(sum == n)
        return 1;
    else   
        return 0;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if(perfect(num))
        printf("perfect number");
    else
    printf("not a perfect number");
    return 0;
    
}
*/


    

/*question:write a program to input and display array.
#include<stdio.h>
int main()
{
    int arr[100], n, i;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);  
    }
    printf("array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;

}
    */








/*question:write a program to find sum and average of array.
    #include<stdio.h>
    int main()
{
    int arr[100], n, i, sum = 0;
    float average;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];  
    }
    average = (float)sum / n;
    printf("sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
    */







/*question:write a program to find largest and smallest element.
    #include<stdio.h>
    int main()
{
    int arr[100], n, i;
    int largest, smallest;
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);  
    }
    largest = smallest = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    printf("largest element = %d\n", largest);
    printf("smallest element = %d\n", smallest);
    return 0;
}
    */







/*question:write a program to count even and odd elements.
#include <stdio.h>
int main() {
    int arr[100], n, i;
    int even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);

    return 0;
}
    */

    
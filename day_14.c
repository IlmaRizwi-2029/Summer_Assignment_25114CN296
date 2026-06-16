/*question:write a program to linear search.

#include <stdio.h>
int main() {
    int arr[100], n, i, num, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found at position %d", i + 1);
    else
        printf("Element not found");

    return 0;
}
    */







/*question:write a program to frequency of an element.
#include <stdio.h>

int main() {
    int arr[100], n, i, num, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            count++;
        }
    }

    printf("Frequency of %d = %d", num, count);

    return 0;
}
    */









/*question:write a program to second largest element.
#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element = %d", secondLargest);

    return 0;
}
    */










/*question:write a program to find duplicates in array.
#include <stdio.h>

int main() {
    int arr[100], n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are:\n");

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}
*/
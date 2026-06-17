/*question:write a program to find missing number in array.
#include <stdio.h>

int main() {
    int n, i, sum = 0, total = 0, missing;

    printf("Enter total numbers (including missing): ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d numbers: ", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}
*/








/*question:write a program to find maximum frequency element.
#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int maxFreq = 0, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        int count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d", maxFreq);

    return 0;
}
*/







/*question:write a program to find pair with given sum.
#include <stdio.h>

int main() {
    int n, i, j, sum, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(found == 0) {
        printf("No pair found");
    }

    return 0;
}
*/








/*question:write a program to remove duplicates from array.
#include <stdio.h>

int main() {
    int arr[100], n, i, j, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/
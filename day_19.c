/* question:write a program to add matrices.
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int i, j, r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter first matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Sum of matrices:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/











/*question:write a program to subtract matrices.
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j, r, col;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &col);

    printf("Enter first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < col; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Subtraction of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/











/*question:write a program to transpose matrix.
#include <stdio.h>

int main() {
    int a[10][10], t[10][10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose Matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/











/*question:write a program to find diagonal sum.
#include <stdio.h>

int main()
{
    int a[10][10], n, i, sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Diagonal Sum = %d", sum);

    return 0;
}
*/







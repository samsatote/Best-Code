// 2D array
#include <conio.h>
#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j;
    printf("Enter the values for first array\n");
    for (i = 0; i <= 1; i++)
        for (j = 0; j <= 1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the values for second array\n");
    for (i = 0; i <= 1; i++)
        for (j = 0; j <= 1; j++)
            scanf("%d", &b[i][j]);
    printf("Addition\n");
    for (i = 0; i <= 1; i++)
    {

        for (j = 0; j <= 1; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

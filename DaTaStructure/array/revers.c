#include <stdio.h>
int main()
{
    int a[] = {5, 9, 7, 3, 4, 2};
    int i, temp, n = 6;
    printf("\nThe given array\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    for (i = 0; i < n; i += 2)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("\n\n After swap two num\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}
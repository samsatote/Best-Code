#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {0, 9, 2, 3, 0, 0, 7, 35, 0, 0};
    int i;
    printf("Given array elements\n");
    for (i = 0; i <= 9; i++)
        printf("%d ", arr[i]);
    printf("\nArrange the elements in order\n");
    for (i = a[i] - 1; i >= a[i]; i--)
    {
        a[i + 1] = a[i];
    }
    printf("%d", a[i]);

    return 0;
}
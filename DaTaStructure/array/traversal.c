#include <stdio.h>
#include <conio.h>
int main()
{
    int a[50], i, size;
    printf("Enter the size of array.\n");
    scanf("%d", &size);
    printf("Enter the Elements in Array.\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The Elements in Array\n");
    for (i = 0; i < size; i++)
    {
        printf(" %d ", a[i]);
    }
}
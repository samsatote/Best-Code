// pointers and array
#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    int a[5], *p;
    p = &a[0];
    for (i = 0; i <= 4; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <= 4; i++)
        // printf("%d ", a[i]);
        printf("%d ", *(p + i));
}

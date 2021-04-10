// array and pointers
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void input(int *p)
{
    int i;
    for (i = 0; i <= 4; i++)
        scanf("%d", p + i);
}
void display(int *p)
{
    int i;
    for (i = 0; i <= 4; i++)
        printf("%d ", *(p + i));
}
void sort(int *p)
{
    int s, t, i;
    for (s = 1; s <= 4; s++)
    {
        for (i = 0; i <= 4 - s; i++)
            if (*(p + i) > *(p + i + 1))
            {
                t = *(p + i); // a[i]  *(p+i)
                *(p + i) = *(p + i + 1);
                *(p + i + 1) = t;
            }
    }
}
int main()
{
    int a[5];
    input(a);
    display(a);
    sort(a);
    display(a);
}
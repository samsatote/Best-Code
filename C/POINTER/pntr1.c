// swapping of two numbers using pointer

#include <stdio.h>
#include <conio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("Enter Two numbers\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
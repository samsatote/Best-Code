//Recurssion
#include <stdio.h>
#include <conio.h>
int fun();
int main()
{
    int s;
    s = sum(3);
    printf("sum of Natural:%d", s);
}
int sum(int a)
{
    int k;
    if (a == 1)
        return (a);
    k = a + sum(a - 1);
    return (k);
}
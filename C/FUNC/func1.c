//takes something return nothing
#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y;
    void add(int ,int);
    printf("Add numbers from functions\n");
    scanf("%d%d", &x, &y);
    add(x,y);
}

void add(int a,int b)

{ 
    int c;
    c=a+b;
    printf("Sum of numbers:%d",c);

}

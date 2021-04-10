//takes nothing return something
#include <stdio.h>
#include <conio.h>
int add(void );
void main()
{
    int s;

    s=add();
    printf("Sun is :%d",s);
}

int add()

{
    int a, b, c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    c = a + b;
    return (c);
}

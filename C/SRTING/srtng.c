#include <stdio.h>
#include <conio.h>
int fun1();
int fun2();
int main()

{
    int s[10] = {'S', 'A', 'T', 'Y', 'A', 'M', '\0'};

    return 0;
}
int fun1();
{

    int i;
    for (i = 0; i <= 10; i++)
        printf("%c", s[i]);
}
int fun2();
{
    for(i=0;s[i]!='\0';i++)
    printf("%s",s);
}
//takes nothing return nothing
#include <stdio.h>
#include <stdlib.h>
int fun1(void);
void main()
{

    fun1();
    printf("1\n");
   // fun1();
}
int fun()
{
    printf("3\n");
    printf("2\n");
    //fun1();
}
int fun1()
{
    printf("4\n");
    fun();
}

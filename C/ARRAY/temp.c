#include<stdio.h>
#include<conio.h>
int main()
{
    float f,c;
    printf("enter temp in f=");
    scanf("%f",&f);
    c=5.0/9.0*(f-32);
    printf("temp in f=%.2f",f);
    printf("\ntemp in c=%.2f",c);
    return 0;
}
//take something return something
#include<stdio.h>
#include<conio.h>
int add(int ,int);
void main()
{
    int s,x,y;
    printf("Enter Two numbers:");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("Sum is:%d",s);

}
int add(int a,int b)
{
    int c;
    c=a+b;
    return (c);
}
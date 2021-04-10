#include <stdio.h>
#include <conio.h>
struct bba
{
    int rollno;
    char name[20];
    int age;
};
struct bba input()
{
    struct bba s;
    printf("Welcome To BBA\n ");
    //  fflush(stdin);
    scanf("%d", &s.rollno);
    fflush(stdin);
    gets(s.name);
    //  fflush(stdin);
    scanf("%d", &s.age);
    return (s);
}
void display(struct bba s)
{
    printf("Roll_NO: %d \nName: %s\nAge: %d", s.rollno, s.name, s.age);
}
void main()
{
    struct bba s;
    s = input();
    display(s);
}

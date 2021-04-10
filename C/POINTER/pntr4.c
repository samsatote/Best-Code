//pointer and strings
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int length(char *);
void reverse(char *s);

int main()
{
    int *s;
    scanf("%[^\n]s", *s);
    reverse(s);
    return (0);
}
void reverse(char *s)
{
    if (*s)
    {
        reverse(s + 1);
        printf("%c", *s);
    }
}
int length(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
        ;
    return (i);
}
// string is usable
#include <stdio.h>
#include <conio.h>
#include <string.h>
void reverse(char *s)
{
    if (*s)
    {
        reverse(s + 1);
        printf("%c", *s);
    }
}

int main()
{
    char s[10];
    scanf("%[^\n]s", s);
    reverse(s);
    return (0);
}

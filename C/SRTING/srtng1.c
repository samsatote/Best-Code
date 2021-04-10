#include <stdio.h>
#include <conio.h>
int main()
{
    char s[] = {'S', 'A', 'T', 'Y', 'A', 'M', '\0'};
    char S[] = "SATOTE";
    int i;
    for (i = 0; s[i] != '\0'; i++)
        printf("%c", s[i]);
    printf("\n%s\n", s);
    puts(s);
    puts(S);
}

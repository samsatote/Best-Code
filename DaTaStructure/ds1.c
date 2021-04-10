#include <stdio.h> // malloc realloc and free exits here
#include <stdlib.h>
#include <string.h>
#define NULL ((void *)0)
int main()
{
    char *a;
    if ((a = (char *)malloc(100)) == NULL)
    {
        printf("malloc failed.\n");
    }
    exit(0);
    printf("Buffer size of 10 created \n");
    strcpy(a, "APPLICATION");
    printf("\nBuffer contains %s", a);
    if ((a = (char *)realloc(a, 150)) == NULL)
    {
        printf("Reallocation failed.\n");
        exit(0);
    }
    printf("Buffer size is modified \n");
    printf("Buffer still contains %s  \n", a);
    strcpy(a, "APPLICATION DEMO");
    printf("Buffer still contains %s  \n", a);
   // free(1);
}

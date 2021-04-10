#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {0, 9, 2, 3, 0, 0, 7, 35, 0, 0};
    int n;
    printf("Given array elements\n");
    for (n = 0; n <= 9; n++)
        printf("%d ", arr[n]);
    printf("\nArrange the elements in order\n");
/* while(1)
{
    arr[n]=arr[9];
    arr[9]=arr[0];
    arr[0]=arr[n];

    printf("array is starting the arranging /n",arr[n]);
} */

     for (n = 0; n <= 9; n++)
        printf("%d ", arr[n]); 
    return 0;
}
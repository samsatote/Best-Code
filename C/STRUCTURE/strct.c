#include <stdio.h>
#include <conio.h>
struct book
{
    int bookid;
    char name[20];
    float price;
};
struct book input()
{
    struct book b;
    printf("Enter BOOK_ID_NAME_PRICE");
    scanf("%d", &b.bookid);
    fflush(stdin);
    gets(b.name);
    scanf("%f", &b.price);
    return (b);
}
void display(struct book b)
{
    printf("BOOK_ID: %d\n NAME: %s\n PRICE: %.2f", b.bookid, b.name, b.price);
}
void main()
{
    struct book b;
    b = input();
    display(b);
}
printf("\nEnter the data You want to insert\n");
scanf("%d", &num);
printf("Enter the posstion\n");
scanf("%d", &poss);
for (i = size - 1; i >= poss; i--)
{
    a[i + 1] = a[i];
}
a[poss - 1] = num;
size++;
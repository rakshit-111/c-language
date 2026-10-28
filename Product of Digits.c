#include <stdio.h>
#include <conio.h>

void main()
{
    int n, digit, product = 1;

    clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        product = product * digit;
        n = n / 10;
    }

    printf("Product of digits = %d", product);

    getch();
}
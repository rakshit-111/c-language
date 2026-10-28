#include <stdio.h>
#include <conio.h>

void main()
{
    int x = 10;

    clrscr();

    printf("Initial value of x = %d\n", x);
    printf("Prefix increment (++x) = %d\n", ++x);
    printf("Value of x after increment = %d\n", x);
    printf("Prefix decrement (--x) = %d\n", --x);
    printf("Value of x after decrement = %d\n", x);

    getch();
}
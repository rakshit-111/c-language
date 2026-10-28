#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;

    clrscr();

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Relational Operators ---\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);

    getch();
}
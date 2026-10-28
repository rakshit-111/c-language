#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, larger;

    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    larger = (a > b) ? a : b;

    printf("The larger number is: %d", larger);

    getch();
}
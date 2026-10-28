#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c, large;

    clrscr();

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
            large = a;
        else
            large = c;
    }
    else
    {
        if(b > c)
            large = b;
        else
            large = c;
    }

    printf("Larger number = %d", large);

    getch();
}
#include <stdio.h>
#include <conio.h>

void main()
{
    int num;

    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 0)
    {
        if(num == 0)
            printf("The number is Zero");
        else
            printf("The number is Positive");
    }
    else
    {
        printf("The number is Negative");
    }

    getch();
}
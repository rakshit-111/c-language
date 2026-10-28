#include <stdio.h>
#include <conio.h>

void main()
{
    int n, count = 0;


    printf("Enter any number: ");
    scanf("%d", &n);

    if(n == 0)
    {
        count = 1;
    }
    else
    {
        while(n != 0)
        {
            n = n / 10;
            count++;
        }
    }

    printf("Total digits = %d", count);

    getch();
}

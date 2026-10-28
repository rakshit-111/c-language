#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i = 1;


    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    getch();
}
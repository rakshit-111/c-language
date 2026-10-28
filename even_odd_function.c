#include <stdio.h>
#include <conio.h>

void find(int n);

void main()
{
    int num;
    
 printf("Enter a number: ");
    scanf("%d", &num);

    find(num);

    getch();
}

void find(int n)
{
    if(n % 2 == 0)
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);
}
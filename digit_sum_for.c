#include <stdio.h>
#include <conio.h>

void main()
{
    int n, digit, sum=0;

  
    printf("Enter any number: ");
    scanf("%d", &n);

    for(; n!=0; n=n/10)
    {
        digit = n%10;
        sum = sum + digit;
    }

    printf("Sum of digits = %d", sum);

    getch();
}

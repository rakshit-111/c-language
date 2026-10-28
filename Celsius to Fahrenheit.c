#include <stdio.h>
#include <conio.h>

void main()
{
    float c, f;

    clrscr();

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %f", f);

    getch();
}
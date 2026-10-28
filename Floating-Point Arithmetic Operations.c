#include <stdio.h>
#include <conio.h>

void main()
{
    float x, y;

    clrscr();

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &x, &y);

    printf("\n--- Floating-Point Arithmetic ---");
    printf("\nAddition = %.2f", x + y);
    printf("\nSubtraction = %.2f", x - y);
    printf("\nMultiplication = %.2f", x * y);
    printf("\nDivision = %.2f", x / y);

    getch();
}
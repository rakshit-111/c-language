#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    char op;


    printf("Enter expression: ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op)
    {
        case '+':
            printf("Sum = %d", a+b);
            break;

        case '-':
            printf("Difference = %d", a-b);
            break;

        case '*':
            printf("Product = %d", a*b);
            break;

        case '/':
            printf("Division = %d", a/b);
            break;

        default:
            printf("Invalid operator");
    }

    getch();
}

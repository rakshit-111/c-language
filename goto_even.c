#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    if (num % 2 == 0)
    {
        printf("The Number is Even");
        goto end;
    }
    else
    {
        printf("The Number is Odd");
        goto end;
    }
end:
    printf("\n");
    getch();
}
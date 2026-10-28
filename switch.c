#include <stdio.h>
#include <conio.h>

void main()
{
int n;

printf("Enter your Choice :");
scanf("%d",&n);

switch(n)
{
    case 1:
    printf("You choose 1");
    break;

    case 2:
    printf("You choose 2");
    break;

    default:
    printf("this is wrong choice");
    break;
}
getch();
}
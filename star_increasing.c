#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,n;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
 {
    {
    for(j=1;j<i+1;j++)
    printf("*");
    }
    printf("\n");

}
    getch();
}
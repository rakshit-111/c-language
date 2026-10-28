#include <stdio.h>
#include <conio.h>

void main()
{
    int m1, m2, m3, m4;
    float total, percentage;

    clrscr();

    printf("Enter marks of four subjects: ");
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);

    total = m1 + m2 + m3 + m4;
    percentage = total / 4;

    printf("Percentage = %f\n", percentage);

    if(percentage >= 80)
        printf("Grade A");
    else if(percentage >= 60)
        printf("Grade B");
    else if(percentage >= 50)
        printf("Grade C");
    else if(percentage >= 40)
        printf("Grade D");
    else
        printf("Fail");

    getch();
}
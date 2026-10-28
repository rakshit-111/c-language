#include <stdio.h>

void drawline(void);
void main()
{
    drawline();
}
void drawline(void)
{
    int i;
    for (i=1;i<=101;i++)
    {
        printf("-");
    }
    
}
#include <stdio.h>

void main()
{
    int arr[5], i;
    printf("Enter the value for arr: ");
    for(i = 0; i < 5; i++)
    {
        
        scanf("%d", &arr[i]);
    }

    printf("The array elements are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }

}
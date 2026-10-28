#include <stdio.h>

void main()
{
    int arr[5], i, sum = 0;
    printf("Enter the value for array: ");
    for(i = 0; i < 5; i++)
    {
        
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
}
#include <stdio.h>


int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);

}

int  main()
{
    int n, num;
    printf("Enter the number: ");
    scanf("%d", &n);

    

    // if(n < 0)
    //     printf("No factorial of negative number\n");
    // else
    // {
    //     while(n > 1)
    //     {
    //         fact *= n;
    //         n--;
    //     }

    //     printf("Factorial of %d = %ld\n", num, fact);
    // }

    // getch();
    int factorial = fact(n);
    printf("factorial : %d" ,factorial);
    return 0;
}
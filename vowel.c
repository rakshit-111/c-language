#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Alphabet is a vowel\n");

        default:
            printf("Alphabet is a consonant\n");
    }

    getch();
}
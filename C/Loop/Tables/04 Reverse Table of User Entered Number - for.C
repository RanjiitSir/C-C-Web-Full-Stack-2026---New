#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n Table of %d is => \n", No);

    for(i = 10; i >= 1; i--)
    {
        printf("\n %d * %-2d = %d", No, i, (No*i));
    }

    printf("\n\n Thanks");

    getch();
    return 0;
}

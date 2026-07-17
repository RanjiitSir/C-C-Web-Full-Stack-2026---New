#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0;

    printf("\n Table of 27 is => \n");

    for(i = 10; i >= 1; i--)
    {
        printf("\n 27 * %-2d = %d",i, (27*i));
    }

    printf("\n\n Thanks");

    getch();
    return 0;
}

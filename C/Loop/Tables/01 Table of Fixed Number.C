#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 1;

    printf("\n Table of 27 is => \n");

    while(i <= 10)
    {
        printf("\n 27 * %-2d = %d",i, (27*i));
        i++;
    }

    printf("\n\n Thanks");

    getch();
    return 0;
}

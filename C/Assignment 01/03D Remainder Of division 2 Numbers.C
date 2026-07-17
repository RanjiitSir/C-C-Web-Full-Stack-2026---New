#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0, N2 = 0, Res = 0;

    printf("\n\t Welcome To Calculator Program \n");

    printf("\n Enter 1st Number : ");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number : ");
    scanf("%d",&N2);

    Res = N1 % N2;

    printf("\n Remainder of Division => %d %% %d = %d !", N1, N2, Res);

    getch();
    return 0;
}

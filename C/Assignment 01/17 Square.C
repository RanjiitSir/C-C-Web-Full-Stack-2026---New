#include<stdio.h>
#include<conio.h>

int main()
{
    float No = 0.0, Res = 0.0;

    printf("\n Enter a Number : ");
    scanf("%f",&No);

    Res = No * No;

    printf("\n Square Of Given Number %0.2f = %0.2f.", No, Res);

    getch();
    return 0;
}

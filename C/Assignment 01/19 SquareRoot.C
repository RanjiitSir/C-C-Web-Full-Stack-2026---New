#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float No = 0.0, SqRoot = 0.0;

    printf("\n Enter a Number : ");
    scanf("%f",&No);

    SqRoot = sqrt(No);

    printf("\n Square Root Of Given Number %0.2f = %0.4f.", No, SqRoot);

    getch();
    return 0;
}

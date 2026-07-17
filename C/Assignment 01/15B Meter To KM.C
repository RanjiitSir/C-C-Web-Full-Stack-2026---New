#include<stdio.h>
#include<conio.h>

int main()
{
    float KM = 0, Mtr = 0;

    printf("\n Enter Distance in Meters : ");
    scanf("%f",&Mtr);

    KM = Mtr / 1000;

    printf("\n Distance => %0.2f Meters = %0.2f KMs", Mtr, KM);

    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
    float FHT = 0.0, CEL = 0.0;

    printf("\n Enter a Temperature in Celsius : ");
    scanf("%f",&CEL);

    FHT = (CEL * (9.0/5.0)) + 32.0;

    printf("\n Temperature %0.2f Degree Celsius = %0.2f Degree Fahrenheit.", CEL, FHT);

    getch();
    return 0;
}

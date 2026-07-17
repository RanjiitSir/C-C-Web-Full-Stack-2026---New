#include<stdio.h>
#include<conio.h>

int main()
{
    float FHT = 0.0, CEL = 0.0;

    printf("\n Enter a Temperature in Fahrenheit : ");
    scanf("%f",&FHT);

    CEL = (FHT - 32.0) * (5.0/9.0);

    printf("\n Temperature %0.2f Degree Fahrenheit = %0.2f Degree Celsius.", FHT, CEL);

    getch();
    return 0;
}

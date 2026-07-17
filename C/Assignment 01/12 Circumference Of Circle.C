#include<stdio.h>
#include<conio.h>

int main()
{
    float Rad = 0.0, Circum = 0.0;

    printf("\n Enter Radius of Circle : ");
    scanf("%f",&Rad);

    Circum = 2 * 3.14 * Rad;

    printf("\n Circumference Of Circle with Radius %0.2f  = %0.2f.",Rad, Circum);

    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
    float Height = 0.0, Width = 0.0, Area = 0.0;

    printf("\n Enter Height of Rectangle : ");
    scanf("%f",&Height);
    printf("\n Enter Width of Rectangle : ");
    scanf("%f",&Width);

    Area = Height * Width;

    printf("\n Area Of Rectangle = %0.2f.", Area);

    getch();
    return 0;
}

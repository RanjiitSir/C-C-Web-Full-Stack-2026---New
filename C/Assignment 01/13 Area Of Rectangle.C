#include<stdio.h>
#include<conio.h>

int main()
{
    float Height = 0.0, Width = 0.0, Area = 0.0;

    printf("\n Enter a Height : ");
    scanf("%f",&Height);
    printf("\n Enter a Width : ");
    scanf("%f",&Width);

    Area = Height * Width;

    printf("\n Area of Rectangle is = %0.2f", Area);

	printf("\n Thanks");

	getch();
	return 0;
}

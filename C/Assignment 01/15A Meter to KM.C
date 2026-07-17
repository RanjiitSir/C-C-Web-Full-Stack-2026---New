#include<stdio.h>
#include<conio.h>

int main()
{
    float Mtrs = 0.0, KMs = 0.0;

    printf("\n Enter Distance in Meters : ");
    scanf("%f",&Mtrs);

    KMs = Mtrs / 1000;

    printf("\n %0.2f Meters = %0.4f KiloMeters", Mtrs, KMs);

    getch();
    return 0;
}

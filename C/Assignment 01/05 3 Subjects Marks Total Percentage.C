/// Three Subjects Marks Total Percentage
#include<stdio.h>
#include<conio.h>

int main()
{
    int Phy = 0, Chem = 0, Maths = 0, Tot = 0;
    float Per = 0;

    printf("\n\t Enter Student Detail => \n");

    printf("\n Enter Physics Marks : ");
    scanf("%d",&Phy);
    printf("\n Enter Chemistry Marks : ");
    scanf("%d",&Chem);
    printf("\n Enter Mathematics Marks : ");
    scanf("%d",&Maths);

    Tot = Phy + Chem + Maths;
    Per = Tot/3.0;

    printf("\n Given Students Total Marks = %d.", Tot);
    printf("\n Given Students Percentage  = %0.2f.", Per);

    getch();
    return 0;
}

/// Square Root
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int No = 0, SqRoot = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    SqRoot = sqrt(No);

    printf("\n Square Root of %d = %d.", No, SqRoot);

    getch();
    return 0;
}

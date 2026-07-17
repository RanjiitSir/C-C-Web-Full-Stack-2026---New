#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Bill = 0, BillSum = 0;

    printf("\n Enter All 10 Bills => ");

    for( i = 1; i <= 10; i++ )
    {
        printf("\n Enter Bill %d : ",i);
        scanf("%d",&Bill);

        BillSum = BillSum + Bill;
    }

    printf("\n Sum of Given 10 Bills is = %d.", BillSum);

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}

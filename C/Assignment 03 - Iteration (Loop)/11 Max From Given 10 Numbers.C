#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Bill = 0, MaxBill = 0;

    printf("\n Enter All 10 Bills => ");

    for( i = 1; i <= 10; i++ )
    {
        printf("\n Enter Bill %d : ",i);
        scanf("%d",&Bill);

        /// MaxBill Logic
        if(Bill > MaxBill)
        {
            MaxBill = Bill;
        }
    }

    printf("\n Maximum Bill of Given 10 Bills is = %d.", MaxBill);

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
        int No1 = 0, No2 = 0;

        printf("\n Enter 2Numbers to get 1st Number 2nd Number of Times => \n");

        printf("\n Enter 1st Number = ");
        scanf("%d",&No1);
        printf("\n Enter 2nd Number = ");
        scanf("%d",&No2);

        if(No2 < 1)
        {
            printf("\n INVALID INPUT \n");
            goto Down;
        }

        printf("\n OUTPUT => \n\n");

        while( No2 > 0 )
        {
                printf(" %d ",No1);
                No2--;
        }

    Down:
        printf("\n\n Thanks!!!");

        getch();
        return  0;
}

/// Print Characters Forward range
#include<stdio.h>
#include<conio.h>

int main()
{
        char sPt = '\0', ePt = '\0';

        printf("\n Enter Start Point : ");
        sPt = getche();         /// x
        printf("\n Enter End Point : ");
        ePt = getche();         /// k

        if( sPt < ePt )
        {
            while( sPt <= ePt )     /// Forward Range
            {
                printf("\n %c",sPt);
                sPt++;
            }
        }
        else
        {
            while( sPt >= ePt )     /// Reverse Range
            {
                printf("\n %c",sPt);
                sPt--;
            }
        }

        printf("\n\n Thanks");

        getch();
        return 0;
}

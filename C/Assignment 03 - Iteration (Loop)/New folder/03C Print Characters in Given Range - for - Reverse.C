/// Print Characters Forward range
#include<stdio.h>
#include<conio.h>

int main()
{
        char sPt = '\0', ePt = '\0';

        printf("\n Enter Start Point : ");
        sPt = getche();
        printf("\n Enter End Point : ");
        ePt = getche();

        while( sPt >= ePt )
        {
            printf("\n %c",sPt);
            sPt--;
        }

        printf("\n\n Thanks");

        getch();
        return 0;
}

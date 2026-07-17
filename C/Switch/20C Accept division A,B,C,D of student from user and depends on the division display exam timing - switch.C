#include<stdio.h>
#include<conio.h>

int main()
{
    char Div = '\0';

    printf("\n Enter Your Division (A/B/C/D) : ");
    Div = getche();

    switch( Div )
    {
        case 'A' :
        case 'a' :
                printf("\n\n Exam of division A at 10 AM.");
                break;

        case 'B' :
        case 'b' :
                printf("\n\n Exam of division B at 10:30 AM.");
                break;

        case 'C' :
        case 'c' :
                printf("\n\n Exam of division C at 12 PM.");
                break;

        case 'D' :
        case 'd' :
                printf("\n\n Exam of division D at 1 PM.");
                break;

        default :
                printf("\n\n INVALID DIVISION. ");
                break;
    }

    printf("\n\n Thanks For Using Our EXAM Service...");

    getch();
    return 0;
}

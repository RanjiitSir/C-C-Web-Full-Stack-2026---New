#include<stdio.h>
#include<conio.h>

int main()
{
    int Month = 0;

    printf("\n Enter a Month Number (1-12) : ");
    scanf("%d",&Month);

    switch(Month)
    {
        case 1:
                printf("\n Jan");
                break;

        case 2:
                printf("\n Feb");
                break;

        case 3:
                printf("\n Mar");
                break;

        case 4:
                printf("\n Apr");
                break;

        case 5:
                printf("\n May");
                break;

        case 6:
                printf("\n Jun");
                break;

        case 7:
                printf("\n Jul");
                break;

        case 8:
                printf("\n Aug");
                break;

        case 9:
                printf("\n Sep");
                break;

        case 10:
                printf("\n Oct");
                break;

        case 11:
                printf("\n Nov");
                break;

        case 12:
                printf("\n Dec");
                break;

        default:
                printf("\n Invalid Month Number");
                break;
    }

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}


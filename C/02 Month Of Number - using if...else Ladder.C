#include<stdio.h>
#include<conio.h>

int main()
{
        char Month  = '\0';

        printf("\n Enter a Month Number (1-12) : ");
        scanf("%c",&Month);

        if(Month == '1')
        {
            printf("\n Jan");
        }
        else if(Month == '2')
        {
            printf("\n Feb");
        }
        else if(Month == '3')
        {
            printf("\n Mar");
        }
        else if(Month == '4')
        {
            printf("\n Apr");
        }
        else if(Month == '5')
        {
            printf("\n May");
        }
        else if(Month == '6')
        {
            printf("\n Jun");
        }
        else if(Month == '7')
        {
            printf("\n Jul");
        }
        else if(Month == '8')
        {
            printf("\n Aug");
        }
        else if(Month == '9')
        {
            printf("\n Sep");
        }
        else if(Month == '10')
        {
            printf("\n Oct");
        }
        else if(Month == '11')
        {
            printf("\n Nov");
        }
        else if(Month == '12')
        {
            printf("\n Dec");
        }
        else
        {
            printf("\n Invalid Month Number");
        }

        printf("\n\n Thanks!!!");

        getch();
        return 0;
}


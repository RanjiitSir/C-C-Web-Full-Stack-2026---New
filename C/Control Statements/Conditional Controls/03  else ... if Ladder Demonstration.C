#include<stdio.h>
#include<conio.h>

int main()
{
        float Amount = 0.0;

        printf("\n Enter Your Account Balance = ");
        scanf("%f",&Amount);

        if(Amount > 10000)
        {
            printf("\n\n\t WELCOME to Mall !!!\n");
            printf("\n\t You Are Prime Customer");
            printf("\n\t Go to Counter No 7 for Prime offers\n");
        }
        else if(Amount >= 7000)
        {
            printf("\n\n\t WELCOME to Mall !!!\n");
            printf("\n\t You Can Enjoy All Shops\n");
        }
        else if(Amount > 1000)
        {
            printf("\n\n\t WELCOME to Mall !!!\n");
            printf("\n\t You can Shop at Ground Floor\n");
        }
        else
        {
            printf("\n\n\t Minimum Balance Required To Shop is 1000+.\n");
        }
        getch();

        printf("\n\n Thanks For Visit !!!");

        getch();
        return 0;
}

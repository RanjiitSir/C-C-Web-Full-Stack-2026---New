#include<stdio.h>
#include<conio.h>

int main()
{
        float Amount = 0.0;

        printf("\n Enter Your Account Balance = ");
        scanf("%f",&Amount);

        if(Amount > 1000)
        {
            printf("\n\n\t WELCOME to Mall !!!\n");

            if(Amount > 10000)
            {
                printf("\n\n\t You Can Be Prime Member Of this Mall !!!");
            }

            printf("\n\n\t Have Nice Shopping!!");
        }
        else
        {
            printf("\n\n\t Minimum Balance Required To Shop Here is 1000+.\n");

            if(Amount > 500)
            {
                printf("\t But You can Visit Our Outlet At Corner!!!\n");
            }
            else
            {
                printf("\n\t You Are Not Eligible To Shop!!!");
            }
        }

        printf("\n\n Thanks For Visit !!!");

        getch();
        return 0;
}

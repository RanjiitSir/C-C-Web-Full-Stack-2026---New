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

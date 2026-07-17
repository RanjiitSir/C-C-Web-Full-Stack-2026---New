/// Calculator
#include<stdio.h>
#include<conio.h>

int main()
{
    char Opr = '\0';
    float N1 = 0, N2 = 0, Res = 0;

    printf("\n\t Welcome To Calculator Program \n");

    printf("\n Enter an operator (+, -, *, /, %) : ");
    Opr = getche();         /// OR  scanf("%c",&Opr);

    if( Opr != '+' && Opr != '-' && Opr != '*' && Opr != '/' && Opr != '%' )
    {
        printf("\n INVALID OPERATOR..");
        return -1;
    }

    printf("\n\n Enter 1st Number : ");
    scanf("%f",&N1);
    printf("\n Enter 2nd Number : ");
    scanf("%f",&N2);

    switch(Opr)
    {
        case '+' :
                Res = N1 + N2;
                printf("\n Addition => %0.2f + %0.2f = %0.2f.", N1, N2, Res);
                break;

        case '-' :
                Res = N1 - N2;
                printf("\n Subtraction => %0.2f - %0.2f = %0.2f.", N1, N2, Res);
                break;

        case '*' :
                Res = N1 * N2;
                printf("\n Multiplication => %0.2f * %0.2f = %0.2f.", N1, N2, Res);
                break;

        case '/' :
                Res = N1 / N2;
                printf("\n Division => %0.2f / %0.2f = %0.2f.", N1, N2, Res);
                break;

        case '%' :
                int(Res) = int(N1) % int(N2);
                printf("\n Rem => %d %% %d = %d.", int(N1), int(N2), int(Res));
                break;
    }

    printf("\n\n Thanks For Using Calculator");

    getch();
    return 0;
}

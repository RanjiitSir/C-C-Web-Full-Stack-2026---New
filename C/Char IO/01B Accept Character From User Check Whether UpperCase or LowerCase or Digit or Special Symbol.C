#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    ch = getche();

    if( ch >= 'A' && ch <= 'Z' )           /// A - Z
    {
        printf("\n Given Letter %c is Uppercase.",ch);
    }
    else if( ch >= 'a' && ch <= 'z' )
    {
        printf("\n Given Letter %c is Lowercase.",ch);
    }
    else if( ch >= '0' && ch <= '9' )
    {
        printf("\n Given Letter %c is Digit.",ch);
    }
    else
    {
        printf("\n Given Letter %c is Special Symbol.",ch);
    }

    getch();
    return 0;
}

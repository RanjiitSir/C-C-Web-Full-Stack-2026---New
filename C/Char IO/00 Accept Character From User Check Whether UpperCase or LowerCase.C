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
    else
    {
        printf("\n Given Letter %c is Not Alphabet.",ch);
    }

    getch();
    return 0;
}

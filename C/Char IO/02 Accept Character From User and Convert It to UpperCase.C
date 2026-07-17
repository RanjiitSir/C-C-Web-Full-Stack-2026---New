/// Accept Character From User and Convert It to UpperCase
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    ch = getche();

    if( ch >= 'A' && ch <= 'Z' )
    {
        printf("\n Given Letter %c is Already UpperCase.", ch);
    }
    else if( ch >= 'a' && ch <= 'z' )
    {
        ch = ch - 32;
        printf("\n Letter After UpperCase : %c",ch);
    }
    else
    {
        printf("\n Given Letter %c is Not Alphabet.",ch);
    }

    getch();
    return 0;
}

/// Accept Character From User and Convert It to LowerCase
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    ch = getche();

    if( ch >= 'a' && ch <= 'z' )
    {
        printf("\n Given Letter %c is Already LowerCase.", ch);
    }
    else if( ch >= 'A' && ch <= 'Z' )
    {
        ch = ch + 32;
        printf("\n Letter After LowerCase : %c",ch);
    }
    else
    {
        printf("\n Given Letter %c is Not Alphabet.",ch);
    }

    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
        char ch = '\0';

        printf("\n Enter a Letter : ");
        ch = getche();

        if( ch >= 'A' && ch <= 'Z' )        /// UPPERCASE
        {
            while( ch <= 'Z' )     /// Forward Range
            {
                printf("\n %c",ch);
                ch++;
            }
        }
        else if( ch >= 'a' && ch <= 'z' )     /// LOWERCASE
        {
            while( ch >= 'a' )     /// Reverse Range
            {
                printf("\n %c",ch);
                ch--;
            }
        }
        else
        {
            printf("\n INVALID INPUT!!!");
        }

        printf("\n\n Thanks");

        getch();
        return 0;
}

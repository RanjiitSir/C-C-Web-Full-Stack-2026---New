/// Print Characters P to B
#include<stdio.h>
#include<conio.h>

int main()
{
        char ch = '\0';

        for(ch = 'P'; ch >= 'B'; ch--)
        {
            printf("\n %c",ch);
        }

        printf("\n\n Thanks");

        getch();
        return 0;
}

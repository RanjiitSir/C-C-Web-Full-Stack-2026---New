#include<stdio.h>
#include<conio.h>

int main()
{
	int No = 0;

	printf("\n Enter A Number : ");
	scanf("%d",&No);

    (No == 0) ? ( printf("\n %d is Neutral.",No) ) : ( (No > 0) ? printf("\n %d is +ve.", No) : printf("\n %d is -ve.", No) ) ;

	printf("\n Thanks");

	getch();
	return 0;
}

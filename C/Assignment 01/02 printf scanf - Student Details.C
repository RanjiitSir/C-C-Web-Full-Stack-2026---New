#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Grade = '\0';
    int RNo = 0, P = 0, C = 0, M = 0, Tot = 0;
    float Per = 0.0;
    char Name[40] = "";
    char Course[20] = "";

    printf("\n Enter Roll No : ");
    scanf("%d",&RNo);

    fflush(stdin);

    printf("\n Enter Name : ");
    gets(Name);                     /// scanf("%[^\n]",&Name);

    fflush(stdin);                  /// Used to clear contents of INPUT BUFFER

    printf("\n Enter Course : ");
    gets(Course);                   /// scanf("%[^\n]",&Course);

    fflush(stdin);

    printf("\n Enter Physics Marks : ");
    scanf("%d",&P);
    printf("\n Enter Chemistry Marks : ");
    scanf("%d",&C);
    printf("\n Enter Maths Marks : ");
    scanf("%d",&M);

    Tot = P + C + M;
    Per = Tot / 3.0;

    if(Per >= 75)
    {
        Grade = 'A';
    }
    else if(Per >= 60)
    {
        Grade = 'B';
    }
    else if(Per >= 35)
    {
        Grade = 'C';
    }
    else
    {
        Grade = 'F';
    }

    printf("\n\n Thanks For Entering Details \n Press Any Key To Go Ahead.");
    getch();

    printf("\n =============***********============ \n");

    printf("\n Entered Student Details Are => \n");
    printf("\n Roll No.   : %d",RNo);
    printf("\n Name       : %s",Name);
    printf("\n Course     : %s",Course);
    printf("\n Physics    : %d",P);
    printf("\n Chemistry  : %d",C);
    printf("\n Maths      : %d",M);
    printf("\n Total      : %d",Tot);
    printf("\n Percentage : %0.2f",Per);
    printf("\n Grade      : %c",Grade);

    /// printf("\n Roll No.   : %d\n Name       : %s\n Course     : %s\n Physics    : %d\n Chemistry  : %d\n Maths      : %d\n Total      : %d\n Percentage : %0.2f\n Grade      : %c", RNo, Name, Course, P, C, M, Tot, Per, Grade);

    printf("\n =============***********============ \n");

    getch();
    return 0;
}

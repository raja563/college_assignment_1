//46.  	C program to print square pattern.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
    printf("square star pattern:\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
}

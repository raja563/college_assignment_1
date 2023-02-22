//47	C program to print number triangle pattern.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
    printf("triangle number pattern:\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
}

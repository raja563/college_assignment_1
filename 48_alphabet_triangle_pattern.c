//48.	C program to print alphabet triangle pattern.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
    printf("alphabet triangle pattern:\n");

    for(i='A';i<='R';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }

    getch();

}

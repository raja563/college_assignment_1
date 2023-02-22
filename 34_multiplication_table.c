//34	C Program to print the multiplication table from 1*1 to 12*10.

#include<stdio.h>

int main()
{
    int i,j;
    printf("\n ---------->Multiplication Table<---------------\n");
    for(i=1;i<=10;i++)
    {
        for(j=2;j<=12;j++)
        {

            printf("%d \t",i*j);
        }
        printf("\n");
    }
}

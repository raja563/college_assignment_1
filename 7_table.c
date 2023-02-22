//7	C Program to print a table of any number.	
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i=1;
    printf("enter a number for printing table:");
    scanf("%d",&num);
    do
    {
        printf("%d x %d = %d\n",num,i,num*i);
        i++;
    } while(i<=10);
    getch();
}

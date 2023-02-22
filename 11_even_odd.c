//11	C Program to find whether given no. is even or odd.

#include<stdio.h>
#include<conio.h>

void main()
{
    int num ;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is even",num);
    }
    else
    {
        printf("%d is odd",num);
    }
    getch();
}

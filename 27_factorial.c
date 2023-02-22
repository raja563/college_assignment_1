//27	C Program to find factorial of a number using functions.

#include<stdio.h>
#include<conio.h>

int  fact(int x);

int  fact(int x)
{
    int r=1;
    if(x==1)
    return 1;
    else
    r=x*fact(x-1);
    return r;
}

 void main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("factorial is: %d ",fact(num));
    getch();
}

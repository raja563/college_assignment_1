//32	C Program to find factorial of a number using recursion.

#include<stdio.h>
#include<conio.h>

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
    printf("factorial of %d  is : %d",num,fact(num));
    getch();
}

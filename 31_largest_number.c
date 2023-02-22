//31	C Program to find largest of two numbers using functions.

#include<stdio.h>
#include<conio.h>

int Largest ();
void main()
{
    int a,b,l;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    l=Largest(a,b);
    printf("largest value is : %d ",l);
    getch();
}
int Largest(int a,int b)
{
    int greater =(a>b)?a:b;
    return (greater);
}

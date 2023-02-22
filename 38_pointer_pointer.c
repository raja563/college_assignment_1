//38	C Program to represent Pointer to a Pointer	.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a=10,*p,**q;
    p=&a;
    q=&p;
    printf(" value of a : %d , p : %d , q : %d",a,p,q);
    getch();
}

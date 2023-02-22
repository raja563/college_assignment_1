//21	C Program to add two number using pointers.

#include<stdio.h>

int main()
{
    int a=43,b=21;
    int *p,*q;
    p=&a;
    q=&b;
    printf("\nsum is : %d\n",*p+(*q));
    return 0;
}

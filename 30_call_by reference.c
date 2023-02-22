//30	C Program to show call by reference.

#include<stdio.h>

int main()
{
    int a=20,b=30,*p,*q;
    printf("before swapping value of a = %d and b = %d\n",a,b);
    p=&a;
    q=&b;
    swap(&a,&b);
    printf(" after swapping value a = %d and b = %d \n",a,b);

}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

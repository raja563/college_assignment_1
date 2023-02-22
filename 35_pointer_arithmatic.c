//35	C Program to print the address using Pointer Arithmetic.
#include<stdio.h>
int main()
{
    int a,*p;
    printf("enter value of a :");
    scanf("%d",&a);

    p=&a;

    printf("address of p is %u\n",p);
    printf("the value of a is %d \n",a);

    p=p+5;

    printf("now address of p is %u\n",p);

    p=p-10;

    printf("now address of p is %u",p);

    return 0;

}

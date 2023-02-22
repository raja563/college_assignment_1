//18	C Program to find factorial of a number.

#include<stdio.h>

int main()
{
    int num,i,fact=1;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        fact=fact*(num-i+1);
    }
    printf("factorial of %d is : %d",num,fact);
    return 0;
}

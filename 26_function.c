//26	C Program to find square of a number using functions.

#include<stdio.h>

void add();//function declaration or prototype

void add()
{
    int num1,num2,sum;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("sum is : %d ",sum);
}

int main()
{
    add();
    return 0;
}


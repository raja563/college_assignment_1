//29	C Program to show call by value.

#include<stdio.h>

int addition(int a ,int b);

int main()
{
    int a,b;
    int sum;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    sum= addition(a,b);
    printf("sum of %d and %d is : %d ",a,b,sum);
    return 0;

}

int addition(int a ,int b)
{
    int sum;
    sum=a+b;
    return (a+b);
}

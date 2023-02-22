// 41.	C Program using Addition of two number using structures.

#include<stdio.h>
#include<conio.h>

struct Addition
{
    int num1;
    int num2;
}a;

void main()
{
    int sum;
    printf("enter two number:");
    scanf("%d%d",&a.num1,&a.num2);

    sum=a.num1+a.num2;
    printf("sum is : %d",sum);
    getch();
}

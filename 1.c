//1	C Program to find sum of two numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,sum;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("addition of two numbers is : %d ",sum);
    getch();   
}
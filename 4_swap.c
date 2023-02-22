/*4	C Program to show swap of two no’s without using third variable.	5-5	
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("before swapping a = %d and b = %d\n",num1,num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("after swapping a = %d and b = %d",num1,num2);
    return 0;
}
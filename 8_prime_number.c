//8. Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is a prime number.",num);
    }
    else
    {
    printf("%d is not a prime number.",num);
    }
}
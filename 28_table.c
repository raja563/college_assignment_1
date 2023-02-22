//28	C Program to show table of a number using functions.

#include<stdio.h>

void table(int num);

int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    table(num);
    return 0;
}

void table(int num)
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d x %d : %d \n",num,i,num*i);
    }
}

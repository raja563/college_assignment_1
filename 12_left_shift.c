// 12. C Program to shift inputted data by two bits to the left.

#include<stdio.h>

int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf(" two bits left shift of %d is : %d ",num,num>>2);
    return 0;
}

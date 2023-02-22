//15	C Program to display first 10 natural no. & their sum.

#include<stdio.h>

int main()
{
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
        printf("%d \n",i);
        sum=sum+i;
    }
    printf("\n\nsum of first 10 natural numbers is : %d\n",sum);
    return 0;
}

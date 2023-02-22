//17	C Program to print Fibonacci series up to 100.

#include<stdio.h>

int main()
{
    int n,f1=0,f2=1,ne=0,sum=0;
    printf("enter maximum number:");
    scanf("%d",&n);

    printf("first %d Fibonacci series number:\n",n);

    while(f1<=n)
    {
        printf(" %d ",f1);
        sum=sum+f1;
        ne=f1+f2;
        f1=f2;
        f2=ne;
    }
    return 0;
}

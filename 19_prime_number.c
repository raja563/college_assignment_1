//19	C Program to find whether given no. is a prime no. or not.

#include<stdio.h>

int main()
{
    int n,flag=0,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0&&n!=1)
    {
      printf("%d is prime.",n);
    }
    else
    {
        printf("%d is not prime.",n);
    }
    return 0;

}

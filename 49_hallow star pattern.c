//49	C program in C to hollow star pattern.
#include<stdio.h>

int main()
{
    int n;
    int i,j;
    printf("hallow star pattern \n");
    printf("enter a nuber:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j==1||j==n)||(i==1||i==n))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

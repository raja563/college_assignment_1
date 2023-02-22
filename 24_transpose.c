//24	C Program to find transpose of a matrix.

#include<stdio.h>

int main()
{
    int array[2][2],transpose[2][2],i,j;
    printf("enter element of matrix:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            transpose[i][j]=array[j][i];
        }
    }
    printf("transpose Matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

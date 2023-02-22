// 23.	C Program to find the maximum no. in an array.

#include<stdio.h>

int main()
{
    int array[5],i,max;
    printf("enter element of array:\n");
    for(i=0;i<5;i++)
    {
        printf("element[%d] : ",i+1);
        scanf("%d",&array[i]);

    }
    max=0;
    for(i=0;i<5;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    printf("maximum value is : %d",max);
    return 0;
}

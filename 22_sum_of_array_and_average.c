// 22.	C Program to show sum of 10 elements of array & show the average.

#include<stdio.h>

int main()
{
    int array[10],i,sum=0;
    float ave;
    printf("enter the element of array: \n");

    for(i=0;i<10;i++)
    {
        printf("element[%d]:",i+1);
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }

    ave=sum/10.0;
    printf("Sum is : %d , Average is %.3f ",sum,ave);
    return 0;
}

//40	C Program using malloc () and free (). function.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int n,*p,i,sum=0;
    p=&n;

    printf("enter no of element :");
    scanf("%d",&n);

    p=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("Element [%d] :",i+1);
        scanf("%d",p+i);
        sum=sum+(*(p+i));
    }

    printf("Entered  Element.\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }

    printf("\nsum of given element :%d", sum);
    getch();
}

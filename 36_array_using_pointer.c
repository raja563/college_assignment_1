//36	C Program using Pointer to Array.
#include<stdio.h>
#include<conio.h>
void main()
{
    int total_marks=500;
    int marks[5],i,sum=0;
    int *p;
    p=&marks;
    float per;
    printf("enter marks of five subjects:\n");
    for(i=0;i<5;i++)
    {
        printf("subject [%d] : ",i+1);
        scanf("%d",p+i);

        sum=sum+(*(p+i));
    }
    per=(sum*100.0)/500.0;
    printf("Total Marks : %d\n",total_marks);
    printf("Obtained marks : %d ,Percent : %.3f",sum,per);


    getch();
}

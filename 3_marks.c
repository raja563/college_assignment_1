/* 3	C Program to calculate sum of five subjects marks
 and find the percentage of their total marks. */
#include<stdio.h>
#include<conio.h>
void main()
{
    int total_marks=500;
    int marks[5],i,sum=0;
    float per;
    printf("enter the marks of subjects.\n");
    for(i=0;i<5;i++)
    {
        printf("subject [%d]:",i+1);
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    per=(sum*100)/total_marks;
    printf("Total_marks : %d\n",total_marks);
    printf("Obtained marks : %d , Percentage : %.2f ",sum,per);
    getch();
    
}
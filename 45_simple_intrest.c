// 45.	C program to find simple interest.

#include<stdio.h>
#include<conio.h>

int main()
{
    int  amount , rate ,time;
    float SI;

    printf("enter amount : ");
    scanf("%d",&amount);
    printf("enter rate:");
    scanf("%d",&rate);
    printf("enter time:");
    scanf("%d",&time);

    SI=(amount*rate*time)/100.0;
    printf("Simple Interest : %.2f",SI);

    getch();
}

//8	C Program to find greatest in 3 numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("enter three numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3)
    {
        printf("%d is greater",num1);
    }
    else if(num2>num1&&num2>num3)
    {
        printf("%d is greater",num2);
    }
    else
    printf("%d is greater",num3);
    getch();
}

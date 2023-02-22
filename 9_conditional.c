//9	C Program to show the use of conditional operator.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    (num%2==0)?printf("even"):printf("odd");
    getch();
}
//6	C Program to find gross salary.
#include<stdio.h>
int main()
{
    float bs,gs,da,hra;
    printf("enter basic salary:");
    scanf("%f",&bs);
    if(bs<5000)
    {
        hra=bs*10/100;
        da=bs*90/100;
    }
    else
    {
        hra=600;
        da=bs*95/100;
    }
    gs=bs+da+hra;
    printf("gross salary is Rs. %.3f", gs);
    return 0;

}

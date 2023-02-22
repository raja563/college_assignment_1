// 14	C Program to display arithmetic operator using switch case.

#include<stdio.h>

void main()
{
    int choise;
    int a,b,i;
    while(1)
    {

    printf("\n1. for addition .\n");
    printf("2. for subtraction .\n");
    printf("3. for multiplication.\n");
    printf("4. for division.\n");
    printf("5. for modulo.\n");
    printf("6. for exit .");
    printf("\nenter your choise:\n");
    scanf("%d",&choise);

    switch(choise)
    {
        case 1:
        {
            int sum;
            printf("enter two numbers:");
            scanf("%d%d",&a,&b);
            sum=a+b;
            printf("sum is : %d",sum);

        }
        break;
        case 2:
        {
            int sub;
            printf("enter two numbers:");
            scanf("%d%d",&a,&b);
            sub=a-b;
            printf("subtraction is : %d",sub);
        }
        break;
        case 3:
        {
            int mul;
            printf("enter two numbers:");
            scanf("%d%d",&a,&b);
            mul=a*b;
            printf("multiplicatrion is : %d",mul);
        }
        break;
        case 4:
        {
            float div,a,b;
            printf("enter two numbers:");
            scanf("%d%d",&a,&b);
            if(b==0)
            printf("invalid operation.");
            div=a/b;
            printf("division is : %f",div);
        }
        break;

        case 5:
        {
            int mod;
            printf("enter two numbers:");
            scanf("%d%d",&a,&b);
            mod=a%b;
            printf("mmodulo is %d",mod);
        }
        case 6:
            exit(0);
            break;
        break;
        default:printf("invalid choise.");
    }

    }

}

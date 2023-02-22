//13	C Program to use switch statement. Display Monday to  Sunday.

#include<stdio.h>

int main()
{
    int day;
    printf("enter day number:");
    scanf("%d",&day);
    switch(day)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default:printf("your entered day is invalid");

        return 0;
    }

}

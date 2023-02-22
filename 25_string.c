//25	C Program to show input and output of a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char name[30];
    printf("enter you name:");
    fgets(name,30,stdin);
    printf("Name:%s",name);
    return 0;
}

//33	C Program to find whether a string is palindrome or not.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,len,flag=0;
    printf("enter any string:");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\n %s is a palindrome String",str);
    }
    else
    {
        printf("\n %s is not a palindrome String",str);
    }
    return 0;
}

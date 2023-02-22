// 42.	C Program using Array of structure..

#include<stdio.h>
#include<conio.h>

struct Student
{
    char name[20];
    char stream[10];

}s1[10];

void main()
{
    int n,i,ID=1;
    printf("enter number of student:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("student[%d] : \n",i+1);
        printf("Enter Name:");
        scanf("%s",s1[i].name);
        printf("Enter Stream:");
        scanf("%s",s1[i].stream);
    }

    printf("Your entered details:\n");
    for(i=0;i<n;i++)
    {
    printf("ID : %d\n", ID);
    printf("Name : %s\n",s1[i].name);
    printf("Stream : %s\n",s1[i].stream);
    ID++;
    }
    getch();



}

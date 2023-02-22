//39	C Program using strcmp() & strcat()function	.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char name1[30],name2[10]="Maurya";
    printf("enter your name:");
    fgets(name1,30,stdin);


    printf("Name compare : %d\n",strcmp(name1,name2));

    strcat(name1,name2);

    printf("Name concatenate : %s",name1);

    getch();

}

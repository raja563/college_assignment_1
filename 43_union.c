// 43.	C program using union to print ID and name of employee.
#include<stdio.h>
#include<conio.h>

union Employee
{
    char name[20];
    int ID;

};

void main()
{
    union Employee emp={"rajababu"};
    printf("Name : %s ",emp.name);

    getch();
}

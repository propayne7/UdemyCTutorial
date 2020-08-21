/*
 * write a program that declares a structure and prints out its content
 * create an employee structure with 3 members:
 *  - name (character array)
 *  - hireDate (int)
 *  - salary (float)
 * declare and initialize an instrance of an employee type
 * read in a second employee from a constole and store it in a structure of type employee
 * prount out the contents of each employee
*/
#include <stdio.h>
#include <string.h>

struct employee
{
    char name[100];
    int hireDate;
    float salary;
};

int main()
{
    struct employee emp1;
        strcpy(emp1.name,"Chris");
        emp1.hireDate = 2020;
        emp1.salary = 50000;

    struct employee emp2;

    printf("\nEnter employee information: \n");
    printf("\nPlease input your name: ");
    scanf("%s", emp2.name);
    printf("\nPlease input your hire year: ");
    scanf("%d", &emp2.hireDate);
    printf("\nPlease input your salary: ");
    scanf("%f", &emp2.salary);

    printf("\nEmployee1 Data\n \t -Name: %s\n \t -Hire Year: %d\n \t -Salary: %.2f\n", emp1.name, emp1.hireDate, emp1.salary);
    printf("\n");
    printf("Employee2 Data\n \t -Name: %s\n \t -Hire Year: %d\n \t -Salary: %.2f\n", emp2.name, emp2.hireDate, emp2.salary);
    return 0;
}
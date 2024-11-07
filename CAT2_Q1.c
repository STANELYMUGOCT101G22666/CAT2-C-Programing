/* AUTHOR: STANELY KARIUKI MUGO
REGNO: CT101/G/22066/24
DATE: 06/11/2024
TITLE: EMPLOYEE
*/
#include <stdio.h>
#include <string.h> //to allow usage of strings in the structure
//defining the structure
struct employee {
char name [25];
int id;
char department [20];
float salary;
char email [50];
} employee;
int main () {
//declaring and initializing an employee variable
strcpy (employee.name, "John Doe");
employee.id=12345;
strcpy(employee.department," Human Resources");
employee.salary= 55000.00;
strcpy(employee.email, "john.doe@company.com");
//preprocessor directive
printf("name: %s\n", employee.name);
printf("id: %d\n", employee.id);
printf("department: %s\n", employee.department);
printf("salary: %f\n", employee.salary);
printf("email %s\n", employee.email);
return 0;
}
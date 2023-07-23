#include <stdio.h>

// Define the Employee structure with a "joiningDate" member
struct Employee {
    char name[50];
    int id;
    float salary;
    int joiningDate_day;
    int joiningDate_month;
    int joiningDate_year;
};

// Function to print details of an Employee
void printEmployeeDetails(struct Employee emp) {
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d-%02d-%d\n", emp.joiningDate_day, emp.joiningDate_month, emp.joiningDate_year);
}

int main() {
    // Declare and initialize the emp1 variable of type Employee
    struct Employee emp1 = {
        "John Doe", // Name
        1001,       // ID
        50000.50,   // Salary
        15,         // Joining Date (day)
        7,          // Joining Date (month)
        2023        // Joining Date (year)
    };

    // Call the function "printEmployeeDetails" and pass "emp1" as an argument.
    printEmployeeDetails(emp1);

    return 0;
}

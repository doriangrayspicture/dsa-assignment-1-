#include <stdio.h>

// Define the Employee structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    // Declare and initialize the emp1 variable of type Employee
    struct Employee emp1 = {
        "John Doe", // Name
        1001,       // ID
        50000.50    // Salary
    };

    // Display the data of emp1
    printf("Employee Information:\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Salary: %.2f\n", emp1.salary);

    return 0;
}

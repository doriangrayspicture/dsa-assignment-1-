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

    // Task (a): Print the values of "name," "id," and "salary" members of "emp1" using dot notation.
    printf("Employee Information (Task a):\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Salary: %.2f\n", emp1.salary);

    // Task (b): Prompt the user to enter values for the members of "emp1" and store them using dot notation.
    printf("\nEnter new data for employee (Task b):\n");
    printf("Enter name: ");
    scanf("%s", emp1.name);

    printf("Enter ID: ");
    scanf("%d", &emp1.id);

    printf("Enter salary: ");
    scanf("%f", &emp1.salary);

    // Task (c): Print the updated values of "emp1" members.
    printf("\nUpdated Employee Information (Task c):\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Salary: %.2f\n", emp1.salary);

    return 0;
}

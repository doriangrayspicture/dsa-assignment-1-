#include <stdio.h>

// Define the Employee structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    // Task (a): Declare an array of Employee structures named "employeeList" with a size of 3.
    struct Employee employeeList[3];

    // Task (b): Prompt the user to enter values for the members of each employee in the "employeeList" array.
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employeeList[i].name);

        printf("ID: ");
        scanf("%d", &employeeList[i].id);

        printf("Salary: ");
        scanf("%f", &employeeList[i].salary);
    }

    // Task (c): Print the details of each employee using a loop and dot notation.
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employeeList[i].name);
        printf("ID: %d\n", employeeList[i].id);
        printf("Salary: %.2f\n", employeeList[i].salary);
        printf("\n");
    }

    return 0;
}

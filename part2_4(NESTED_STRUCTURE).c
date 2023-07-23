#include <stdio.h>

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define the Employee structure with a "joiningDate" member of type "Date"
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    // Declare and initialize the emp1 variable of type Employee
    struct Employee emp1 = {
        "John Doe", // Name
        1001,       // ID
        50000.50,   // Salary
        {15, 7, 2023} // Joining Date
    };

    // Task (c): Prompt the user to enter values for the "joiningDate" member of "emp1"
    printf("Enter Joining Date for Employee:\n");
    printf("Day: ");
    scanf("%d", &emp1.joiningDate.day);

    printf("Month: ");
    scanf("%d", &emp1.joiningDate.month);

    printf("Year: ");
    scanf("%d", &emp1.joiningDate.year);

    // Print the updated details of emp1
    printf("\nUpdated Employee Information:\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Joining Date: %02d-%02d-%d\n", emp1.joiningDate.day, emp1.joiningDate.month, emp1.joiningDate.year);

    return 0;
}

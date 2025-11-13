#include <iostream>
#include <vector>
#include <string>

struct Employee {
    int id;
    std::string name;
    double salary;
};

std::vector<Employee> employees;

void addEmployee() {
    Employee newEmployee;
    std::cout << "Enter employee ID: ";
    std::cin >> newEmployee.id;
    std::cout << "Enter employee name: ";
    std::cin.ignore();
    std::getline(std::cin, newEmployee.name);
    std::cout << "Enter employee salary: ";
    std::cin >> newEmployee.salary;

    employees.push_back(newEmployee);
    std::cout << "Employee added to the system.\n";
}

void displayEmployees() {
    if (employees.empty()) {
        std::cout << "Employee database is empty.\n";
        return;
    }

    std::cout << "Employee Database:\n";
    for (const Employee& employee : employees) {
        std::cout << "ID: " << employee.id << "\n";
        std::cout << "Name: " << employee.name << "\n";
        std::cout << "Salary: $" << employee.salary << "\n\n";
    }
}

int main() {
    while (true) {
        std::cout << "Employee Management System\n";
        std::cout << "1. Add an employee\n";
        std::cout << "2. Display employee database\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                std::cout << "Goodbye!\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

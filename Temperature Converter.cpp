#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        cout << "Choose an option:\n";
        cout << "1. Convert Celsius to Fahrenheit\n";
        cout << "2. Convert Fahrenheit to Celsius\n";
        cout << "3. Quit\n";
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;

        if (choice == '1') {
            double celsius, fahrenheit;
            cout << "Enter temperature in Celsius: ";
            cin >> celsius;
            fahrenheit = (celsius * 9.0/5.0) + 32;
            cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
        } else if (choice == '2') {
            double fahrenheit, celsius;
            cout << "Enter temperature in Fahrenheit: ";
            cin >> fahrenheit;
            celsius = (fahrenheit - 32) * 5.0/9.0;
            cout << "Temperature in Celsius: " << celsius << "°C" << endl;
        } else if (choice == '3') {
            cout << "Goodbye!" << endl;
        } else {
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
        }

    } while (choice != '3');

    return 0;
}

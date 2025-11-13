#include <iostream>
#include <string>
#include <map>

// User database
std::map<std::string, std::string> userDatabase;

void addUser() {
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;
    userDatabase[username] = password;
    std::cout << "User added to the system.\n";
}

bool authenticateUser(const std::string& username, const std::string& password) {
    auto it = userDatabase.find(username);
    if (it != userDatabase.end() && it->second == password) {
        return true;
    }
    return false;
}

int main() {
    while (true) {
        std::cout << "Security System\n";
        std::cout << "1. Add user\n";
        std::cout << "2. Authenticate\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                addUser();
                break;
            case 2: {
                std::string username, password;
                std::cout << "Enter username: ";
                std::cin >> username;
                std::cout << "Enter password: ";
                std::cin >> password;
                if (authenticateUser(username, password)) {
                    std::cout << "Authentication successful.\n";
                } else {
                    std::cout << "Authentication failed.\n";
                }
                break;
            }
            case 3:
                std::cout << "Goodbye!\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

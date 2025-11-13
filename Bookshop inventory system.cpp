#include <iostream>
#include <vector>
#include <string>

struct Book {
    std::string title;
    std::string author;
    double price;
    int quantity;
};

std::vector<Book> inventory;

void addBook() {
    Book newBook;
    std::cout << "Enter book title: ";
    std::cin.ignore();
    std::getline(std::cin, newBook.title);
    std::cout << "Enter author: ";
    std::getline(std::cin, newBook.author);
    std::cout << "Enter price: ";
    std::cin >> newBook.price;
    std::cout << "Enter quantity in stock: ";
    std::cin >> newBook.quantity;

    inventory.push_back(newBook);
    std::cout << "Book added to inventory.\n";
}

void displayInventory() {
    if (inventory.empty()) {
        std::cout << "Inventory is empty.\n";
        return;
    }

    std::cout << "Book Inventory:\n";
    for (const Book& book : inventory) {
        std::cout << "Title: " << book.title << "\n";
        std::cout << "Author: " << book.author << "\n";
        std::cout << "Price: $" << book.price << "\n";
        std::cout << "Quantity in stock: " << book.quantity << "\n\n";
    }
}

int main() {
    while (true) {
        std::cout << "Bookshop Inventory System\n";
        std::cout << "1. Add a book\n";
        std::cout << "2. Display inventory\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayInventory();
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

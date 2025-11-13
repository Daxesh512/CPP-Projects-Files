#include <iostream>
#include <string>
#include <algorithm>

bool isValidCreditCard(const std::string& creditCardNumber) {
    int sum = 0;
    bool doubleDigit = false;

    // Reverse the credit card number for easier processing
    std::string reversedCardNumber = creditCardNumber;
    std::reverse(reversedCardNumber.begin(), reversedCardNumber.end());

    for (size_t i = 0; i < reversedCardNumber.length(); ++i) {
        int digit = reversedCardNumber[i] - '0';

        if (doubleDigit) {
            digit *= 2;
            if (digit > 9) {
                digit = digit - 9;
            }
        }

        sum += digit;
        doubleDigit = !doubleDigit;
    }

    return (sum % 10 == 0);
}

int main() {
    std::string creditCardNumber;
    
    std::cout << "Enter a credit card number: ";
    std::cin >> creditCardNumber;

    if (isValidCreditCard(creditCardNumber)) {
        std::cout << "Valid credit card number.\n";
    } else {
        std::cout << "Invalid credit card number.\n";
    }

    return 0;
}

#include <iostream>

// Function to recursively convert a decimal number to binary
void decimalToBinary(int num) {
    if (num == 0) {
        return;
    }
    decimalToBinary(num / 2);  // Recursive call with the quotient
    std::cout << (num % 2);    // Print the remainder (binary digit)
}

int main() {
    int number;

    std::cout << "Enter a decimal number: ";
    std::cin >> number;

    if (number == 0) {
        std::cout << "0";  // Edge case for input 0
    } else {
        decimalToBinary(number);
    }

    std::cout << std::endl;

    return 0;
}

#include <iostream>

int main() {
    // Declare variables
    int amount, notes500, notes100, notes50, notes10;

    // Initialize the count of each type of note to zero
    notes500 = notes100 = notes50 = notes10 = 0;

    // Prompt the user to enter the amount
    std::cout << "Enter the amount: ";
    std::cin >> amount;

    // Calculate the number of each type of note
    switch (amount / 500) {
        case 1:
            notes500 = 1;
            amount -= 500;
            break;
        case 0:
            break;
    }

    switch (amount / 100) {
        case 1:
            notes100 = 1;
            amount -= 100;
            break;
        case 0:
            break;
    }

    switch (amount / 50) {
        case 1:
            notes50 = 1;
            amount -= 50;
            break;
        case 0:
            break;
    }

    switch (amount / 10) {
        case 1:
            notes10 = 1;
            amount -= 10;
            break;
        case 0:
            break;
    }

    // Output the result
    std::cout << "Notes of 500 = " << notes500 << " and notes of 100 = " << notes100
              << " and notes of 50 = " << notes50 << " and notes of 10 = " << notes10 << std::endl;

    return 0;
}

// write a program that prints entered number promt by user and in case of negative number shows message and ask again
#include <iostream>

int main() {
    int num;

    do {
        std::cout << "Enter a positive integer: ";
        std::cin >> num;

        if (num <= 0) {
            std::cout << "Please enter a positive integer!" << std::endl;
        }
    } while (num <= 0);

    std::cout << "You entered: " << num << std::endl;

    return 0;
}

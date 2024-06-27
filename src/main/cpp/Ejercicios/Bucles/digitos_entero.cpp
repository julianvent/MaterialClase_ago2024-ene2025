#include <iostream>

int main()
{
    int number;

    std::cout << "-- Digitos de un entero --\n";
    std::cout << "Ingresa un numero entero: ";
    std:: cin >> number;

    int tempNumber {number};

    while (tempNumber > 0) {
        int digit {tempNumber % 10};
        std::cout << digit << "   ";

        tempNumber /= 10;
    }

    return 0;
}
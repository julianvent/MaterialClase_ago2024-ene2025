#include <iostream>
#include <cmath>

int main()
{
    int binaryNumber;

    std::cout << "-- Calculadora de numeros binarios --\n";
    std::cout << "Ingresa el número binario:\n";
    std::cin >> binaryNumber;

    // stores the conversion from binary to int
    int conversionResult {0};

    int tempBinary {binaryNumber};
    int base {1};

    while (tempBinary > 0)
    {
        int digit{tempBinary % 10};
        conversionResult += digit * base;
        base *= 2;
        tempBinary /= 10;
    }

    std::cout << conversionResult;
    return 0;
}

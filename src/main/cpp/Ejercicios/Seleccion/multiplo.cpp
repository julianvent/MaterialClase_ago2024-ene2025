#include <iostream>

int main()
{
    int num1;
    int num2;

    std::cout << "-- Multiplos --\n";
    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> num2;

    if (num1 % num2 == 0)
        std::cout << num1 << " es multiplo de " << num2;
    else
        std::cout << num1 << " no es multiplo de " << num2;
        
    return 0;
}
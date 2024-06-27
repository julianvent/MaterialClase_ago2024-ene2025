#include <iostream>

int main()
{
    int num1;
    int num2;

    std::cout << "-- Comparacion de numeros --\n";
    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> num2;

    if (num1 > num2)
        std::cout << num2 << " es mayor";
    else if (num2 > num1)
        std::cout << num2 << " es mayor";
    else
        std::cout << "Estos numeros son iguales";

    /* if (num1 == num2)
        std::cout << "Estos numeros son iguales";
    else
        std::cout << std::max(num1, num2) << " es mayor"; */ 

    return 0;
}
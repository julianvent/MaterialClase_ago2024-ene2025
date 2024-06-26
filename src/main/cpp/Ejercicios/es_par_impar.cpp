#include <iostream>

int main()
{
    int number;

    std::cout << "Es par o impar? Ingresa un numero mayor que 0:\n";
    std::cin >> number;

    if (number < 1)
        std::cout << "Error. El numero debe ser mayor que 0.";
    else if (number % 2 == 0)
        std::cout << number << " es par.";
    else
        std::cout << number << " es impar."; 
        
}

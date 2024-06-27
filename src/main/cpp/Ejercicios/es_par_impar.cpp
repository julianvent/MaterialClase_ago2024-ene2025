#include <iostream>

int main()
{
    int number;

    std::cout << "Es par o impar? Ingresa un numero:\n";
    std::cin >> number;

    if (number % 2 == 0)
        std::cout << number << " es par.";
    else
        std::cout << number << " es impar."; 
    
    return 0;
}

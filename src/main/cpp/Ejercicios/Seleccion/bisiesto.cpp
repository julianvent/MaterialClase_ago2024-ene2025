#include <iostream>

int main()
{
    int year;
    std::cout << "-- Bisiestos --\n";
    std::cout << "Ingresa un anio: ";
    std::cin >> year;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        std::cout << year << " es bisiesto\n";
    else
        std::cout << year << " no es bisiesto\n";

    return 0;
}
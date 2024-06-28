#include <iostream>

int main()
{
    int counter;

    std::cout << "-- Encuentra el numero mayor --\n";
    std::cout << "Cuantos numeros deseas ingresar? ";
    std::cin >> counter;
    std::cout << "Ingresa " << counter << " numeros para determinar el mayor:\n";

    int max;
    std::cin >> max;
    counter--;

    for (int i {0}; i < counter; i++)
    {
        int number;
        std::cin >> number;

        if (number > max)
            max = number;
    }

    std::cout << "El numero mayor es " << max;

    return 0;
}

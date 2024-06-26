#include <iostream>
#include <cmath> // o #include <math.h>

int main()
{
    double weight;
    double height;

    std::cout << "--- Calculadora de IMC ---\n";
    std::cout << "Ingresa tu peso en kg: ";
    std::cin >> weight;

    std::cout << "Ingresa tu estatura en metros: ";
    std::cin >> height;

    double BMI {weight / pow(height, 2)};

    std::cout << "\n-- Resultados --\n";
    std::cout << "IMC: " << BMI << '\n';
    std::cout << "Clasificacion: ";

    if (BMI < 18.5)
        std::cout << "Bajo peso";
    else if (BMI < 25)
        std::cout << "Normal";
    else if (BMI < 30)
        std::cout << "Sobrepeso";
    else
        std::cout << "Obesidad";

    return 0;
}

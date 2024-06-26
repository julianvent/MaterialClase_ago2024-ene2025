#include <iostream>

int main() 
{
    std::cout << "Ingresa tu nombre: ";
    
    std::string name;
    getline(std::cin, name);    // uso de la función getline para leer una cadena con espacios

    std::cout << "Ingresa tu edad: ";
    int age;
    std::cin >> age;            // leer un número

    std::cout << "Nombre: " << name << '\n';
    std::cout << "Edad: " << age << '\n';
    return 0;
}

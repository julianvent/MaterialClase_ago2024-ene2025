#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "Ingresa tu nombre: ";
    std::cin >> name;
    
    std::cout << "Ingresa tu edad: ";
    std::cin >> age;

    std::cout << "Nombre: " << name << '\n';
    std::cout << "Edad: " << age << '\n';
    
    return 0;
}

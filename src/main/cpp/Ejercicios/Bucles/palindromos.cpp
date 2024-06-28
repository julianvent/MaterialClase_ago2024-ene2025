#include <iostream>

int main()
{
    int number;

    std::cout << "-- Palindromos --\n";
    std::cout << "Ingresa un número: ";
    std::cin >> number;

    int palindrome {0};
    int tempNumber {number};

    while (tempNumber > 0)
    {
        int digit {tempNumber % 10};
        palindrome = palindrome * 10 + digit;
        tempNumber /= 10;
    }

    if (number == palindrome)
        std::cout << number << " es un palindromo";
    else
        std::cout << number << " no es un palindromo";

    return 0;
}

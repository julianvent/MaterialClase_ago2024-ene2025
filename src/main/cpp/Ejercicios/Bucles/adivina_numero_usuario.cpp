#include <iostream>

int main()
{
    srand(time(NULL));  // genera una semilla a partir del tiempo del sistema
    int randomNumber {rand() % 100 + 1};
    int userGuessNumber;
    int numberOfGuesses {0} ;

    std::cout << "== Adivina el numero! ==\n";
    std::cout << "Cual es el numero? Ingresa tu numero del 1-100:\n";

    do {
        std::cin >> userGuessNumber;

        if (userGuessNumber > randomNumber)
            std::cout << "Intenta mas bajo...\n";
        
        if (userGuessNumber < randomNumber)
            std::cout << "Intenta mas alto...\n";
        
        numberOfGuesses++;
    } while (userGuessNumber != randomNumber);
    
    std::cout << "Ganaste! Intentaste adivinar " << numberOfGuesses << " veces.";

    return 0;
}   

#include <iostream>

int main() {
    double numero;
    double menor;

    std::cout << "Digite 5 numeros:\n";

    // Lê o primeiro número para iniciar a comparação
    std::cout << "Numero 1: ";
    std::cin >> numero;
    menor = numero; // O primeiro número é, por enquanto, o menor

    // Loop para ler os outros 4 números
    for (int i = 2; i <= 5; ++i) {
        std::cout << "Numero " << i << ": ";
        std::cin >> numero;

        // Se o número digitado for menor que o atual menor, atualiza
        if (numero < menor) {
            menor = numero;
        }
    }

    // Exibe o resultado
    std::cout << "\nO menor numero digitado e: " << menor << std::endl;

    return 0;
}
#include <iostream>

int main() {
    double numero;
    double maior;
    double menor;

    std::cout << "Digite 10 numeros:\n";

    // Lê o primeiro número para iniciar os pontos de referência
    std::cout << "Numero 1: ";
    std::cin >> numero;
    maior = numero;
    menor = numero;

    // Loop para ler os outros 9 números
    for (int i = 2; i <= 10; ++i) {
        std::cout << "Numero " << i << ": ";
        std::cin >> numero;

        // Verifica se o número atual é o maior de todos
        if (numero > maior) {
            maior = numero;
        }

        // Verifica se o número atual é o menor de todos
        if (numero < menor) {
            menor = numero;
        }
    }

    // Exibe os dois resultados encontrados
    std::cout << "\nO maior numero digitado foi: " << maior << std::endl;
    std::cout << "O menor numero digitado foi: " << menor << std::endl;

    return 0;
}
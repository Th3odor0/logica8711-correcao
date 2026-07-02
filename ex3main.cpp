#include <iostream>

int main() {
    double numero;
    double maior;

    std::cout << "Digite 5 numeros:\n";

    // Lê o primeiro número para iniciar a comparação
    std::cout << "Numero 1: ";
    std::cin >> numero;
    maior = numero; // O primeiro número é, por enquanto, o maior

    // Loop para ler os outros 4 números
    for (int i = 2; i <= 5; ++i) {
        std::cout << "Numero " << i << ": ";
        std::cin >> numero;

        // Se o número digitado for maior que o atual maior, atualiza
        if (numero > maior) {
            maior = numero;
        }
    }

    // Exibe o resultado
    std::cout << "\nO maior numero digitado e: " << maior << std::endl;

    return 0;
}
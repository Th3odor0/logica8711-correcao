#include <iostream>

int main() {
    int numero;
    int somaPares = 0;

    std::cout << "Digite 10 numeros inteiros:\n";

    // Loop para ler os 10 números
    for (int i = 0; i < 10; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numero;

        // Verifica se o número é par usando o operador de resto (%)
        if (numero % 2 == 0) {
            somaPares += numero; // Só soma se for par
        }
    }

    // Exibe o resultado final
    std::cout << "\nA soma apenas dos numeros pares e: " << somaPares << std::endl;

    return 0;
}
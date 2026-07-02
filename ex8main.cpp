#include <iostream>

int main() {
    int numeros[10];

    std::cout << "Digite 10 numeros inteiros:\n";

    // Loop para ler os 10 números e armazenar no array
    for (int i = 0; i < 10; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

    std::cout << "\nOs numeros impares digitados foram:\n";

    // Loop para verificar cada número do array
    for (int i = 0; i < 10; ++i) {
        // Se o resto da divisão por 2 não for 0, o número é ímpar
        if (numeros[i] % 2 != 0) {
            std::cout << numeros[i] << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
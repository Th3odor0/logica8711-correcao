#include <iostream>

int main() {
    double numeros[5];

    std::cout << "Digite 5 numeros:\n";

    // Loop para ler os 5 números e armazenar no array
    for (int i = 0; i < 5; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

    std::cout << "\nOs numeros na ordem inversa sao:\n";

    // Loop que começa no último índice (4) e vai até o primeiro (0)
    for (int i = 4; i >= 0; --i) {
        std::cout << numeros[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
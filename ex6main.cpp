#include <iostream>

int main() {
    // Declaração e inicialização do array com 10 números
    double numeros[10] = {1.5, 4.0, 7.2, 9.0, 12.3, 5.5, 8.1, 3.0, 22.4, 10.0};

    // Calcula a quantidade de elementos no array
    int quantidade = sizeof(numeros) / sizeof(numeros[0]);

    // Exibe o resultado
    std::cout << "O array possui " << quantidade << " elementos." << std::endl;

    return 0;
}
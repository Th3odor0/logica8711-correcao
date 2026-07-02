#include <iostream>

int main() {
    double numeros[8];
    double soma = 0.0;
    double media;

    std::cout << "Digite 8 numeros:\n";

    // Loop para ler os números, armazenar no array e somar
    for (int i = 0; i < 8; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];
        soma += numeros[i];
    }

    // Calcula a média dos 8 números
    media = soma / 8.0;
    std::cout << "\nA media calculada foi: " << media << "\n";
    std::cout << "Os numeros acima da media sao:\n";

    // Loop para verificar quais elementos do array são maiores que a média
    for (int i = 0; i < 8; ++i) {
        if (numeros[i] > media) {
            std::cout << numeros[i] << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
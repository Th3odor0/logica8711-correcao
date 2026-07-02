#include <iostream>

int main() {
    double numero;
    double soma = 0.0;
    double media;

    std::cout << "Digite 5 numeros:\n";

    // Loop para ler os 5 números e somá-los
    for (int i = 0; i < 5; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numero;
        soma += numero; // Acumula a soma dos números
    }

    // Calcula a média dividindo o total por 5
    media = soma / 5.0;

    // Exibe o resultado
    std::cout << "\nA media dos numeros e: " << media << std::endl;

    return 0;
}
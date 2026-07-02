#include <iostream>

int main() {
    double numero;
    int positivos = 0;
    int negativos = 0;

    std::cout << "Digite 10 numeros:\n";

    // Loop para ler os 10 números
    for (int i = 0; i < 10; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numero;

        // Verifica se o número é positivo ou negativo
        if (numero > 0) {
            positivos++; // Incrementa o contador de positivos
        } else if (numero < 0) {
            negativos++; // Incrementa o contador de negativos
        }
        // Nota: se o número for exatamente 0, ele não entra em nenhum dos dois
    }

    // Exibe os resultados
    std::cout << "\nQuantidade de numeros positivos: " << positivos << std::endl;
    std::cout << "Quantidade de numeros negativos: " << negativos << std::endl;

    return 0;
}
#include <iostream>

int main() {
    double numero;
    int contador5 = 0;

    std::cout << "Digite 10 numeros:\n";

    // Loop para ler os 10 números
    for (int i = 0; i < 10; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numero;

        // Se o número digitado for igual a 5, incrementa o contador
        if (numero == 5) {
            contador5++;
        }
    }

    // Exibe o resultado
    std::cout << "\nO numero 5 apareceu " << contador5 << " vez(es)." << std::endl;

    return 0;
}
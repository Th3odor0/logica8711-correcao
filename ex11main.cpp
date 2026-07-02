#include <iostream>

int main() {
    double numeros[10];
    double numeroBuscado;
    bool encontrado = false;

    std::cout << "Digite 10 numeros:\n";

    // Loop para ler e armazenar os 10 números no array
    for (int i = 0; i < 10; ++i) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

    // Solicita o número que deve ser buscado
    std::cout << "\nDigite o numero que deseja procurar: ";
    std::cin >> numeroBuscado;

    std::cout << "\nResultados da busca:\n";

    // Loop para varrer o array e procurar o número
    for (int i = 0; i < 10; ++i) {
        if (numeros[i] == numeroBuscado) {
            // Exibe a posição (índice do array) e a posição "humana" (i + 1)
            std::cout << "Numero encontrado na posicao (indice): " << i << " (Ou numero sequencial: " << i + 1 << ")\n";
            encontrado = true;
        }
    }

    // Se a variável 'encontrado' continuar falsa, o número não existe no array
    if (!encontrado) {
        std::cout << "O numero " << numeroBuscado << " nao foi encontrado no array.\n";
    }

    return 0;
}
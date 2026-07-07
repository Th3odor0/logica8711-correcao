#include<iostream>
#include<vector>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int> numeros;
    int quantidade;

    std::cout<<"Adicionar do usuario"<<std::endl;

    std::cout<<"Quantos numeros?"<<std::endl;
    std::cin>>quantidade;

    for (int i = 0; i < quantidade; i++){
      int numero;
      std::cout<<"Digite o numero "<<(i + 1)<<": ";
      std::cin>>numero;
      numeros.push_back(numero);
    }
    

    return 0;
}
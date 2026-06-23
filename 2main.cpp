#include<iostream>
#include<string>
#include<Windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int pilhas[5];
    int topo = -1;
    int tamanho = 5;

    std::cout<<"==== PILHA ===="<<std::endl;
    std::cout<<std::endl;

    pilhas[0] = 10;
    pilhas[1] = 20;
    pilhas[2] = 30;
    topo = 2;

    std::cout<<"Elementos empilhados: 10, 20, 30"<<std::endl;
        while (topo >= 0){
            std::cout<<"Removida: "<<pilhas[topo]<<std::endl;
            topo--;
        }
    return 0;
}
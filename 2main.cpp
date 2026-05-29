#include<iostream>
#include<Windows.h>

void tabuada(int numero, int multiplicador){
    if(multiplicador == 0){
        return;
    }

    tabuada(numero, multiplicador - 1);

    std::cout<<numero<<" x "<<multiplicador<<" = "<<(numero * multiplicador)<<std::endl;

}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int tabu;
    int multi;

    std::cout<<"Digite o numero da tabuada"<<std::endl;
    std::cin>>tabu;

    std::cout<<"Digite o multiplicador"<<std::endl;
    std::cin>>multi;

    std::cout<<"O resultado é: "<<tabu<<multi<<tabuada(tabu * multi)<<std::endl;

    return 0;
}
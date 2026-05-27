#include<iostream>
#include<Windows.h>


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    
    int numeros[5];
    int soma = 0;

    for(int i = 1; i <= 5; i++){
        std::cout<<"Digite o numero: "<<(i + 1)<<":";
        std::cin>>numeros[i];
        soma += numeros[i];
    }

    std::cout<<"Soma: "<<soma<<std::endl;

    return 0;
}
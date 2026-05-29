#include<iostream>
#include<Windows.h>

int contarDigitos(int n){
    if(n == 0) return 0;

    return 1 + contarDigitos(n / 10);
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numeroUsario;

    std::cout<<"Digite um numero inteiro: "<<std::endl;
    std::cin>>numeroUsario;

    if (numeroUsario == 0){
        std::cout<<"O numero o tem 1 digito.\n";
    }else{
        std::cout<<"O numero "<<numeroUsario<<" tem "<<contarDigitos(numeroUsario)<<" digitos.\n";
    }
    
    return 0;
}
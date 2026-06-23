#include<iostream>
#include<windows.h>
int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numeros[] = {1,2,3,2,4,5,3,6};
    int tamanho = 8;

    std::cout<<"==== NÚMEROS DUPLICADOS ===="<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Array: ";
    for(int i = 0; i < tamanho; i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Numeros duplicados: "<<std::endl;
    for(int i = 0; i < tamanho; i++){
        for(int j = i + 1; j < tamanho; j++){
            if(numeros[i] == numeros[j]){
                std::cout<<numeros[i]<<" aparece mais de uma vez!"<<std::endl;
                break;
            }
        }
    }
    
    return 0;
}
#include<iostream>
#include<Windows.h>


int encontrarMaior(int arr[], int tamanho){
    int maior = arr[0];

    for (int i = 0; i < tamanho; i++){
        if (arr[i] > maior){
            maior = arr[i];
        }
        
    }
return maior;    
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numeros[5];

    std::cout<<"Digite 5 numeros: "<<std::endl;
        for (int i = 0; i < 5; i++){
            std::cout<<"Digite o numero "<<(i + 1)<<":";
            std::cin>>numeros[i];
        }

        std::cout<<"Maior numero: "<<encontrarMaior(numeros, 5)<<std::endl;
        


    return 0;
}
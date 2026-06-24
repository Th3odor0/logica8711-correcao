#include<iostream>
#include<windows.h>
int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numeros[] = {10, 20, 30, 40, 50, 60, 70};
    int tamanho = 8;
    int buscado;

    std::cout<<"==== Buscar numeros ====="<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Array: ";
    for (int i = 0; i < tamanho; i++){
      std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Digite o numero a buscar: ";
    std::cin>>buscado;

    int posicao = -1;

    for (int i = 0; i < tamanho; i++){
      if (numeros[i] == buscado){
        posicao = i;
        break;
      }
      
    }
    
    std::cout<<std::endl;
    if (posicao != -1){
      std::cout<<"Encontrado na posição "<<posicao<<std::endl;
    }else{
      std::cout<<"Não encontrado!"<<std::endl;
    }
    return 0;
}
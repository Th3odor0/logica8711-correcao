#include<iostream>
#include<vector>
#include<Windows.h>

int main(){

    // Configura o terminal do Windows para aceitar acentuação corretamente (UTF-8)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int> numeros;
   
    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15);
    numeros.push_back(20);
    numeros.push_back(25);

    //apresente o  vector, mostre os numero...
    //depois mostre só os pares e depois so os impares
    

    //mostrando todos os numeros da tabela
    std::cout<<"Mostrando todos os numeros: ";

    for (int i = 0; i < numeros.size(); i++){
      std::cout<<numeros[i]<<std::endl;
    }
    
    //mostrando todos os numeros pares da tabela
    std::cout<<"Mostrando Pares: ";

    for (int i = 0; i < numeros.size(); i++){
      std::cout<<numeros[i]<<std::endl;
      if (numeros[i] % 2 == 0){
        std::cout<<numeros[i]<<std::endl;
      }
    }
    //mostrando todos os numeros impares da tabela
    std::cout<<"Mostrando os impares: ";
    
    for (int i = 0; i < numeros.size(); i++){
      std::cout<<numeros[i]<<std::endl;
      if (numeros[i] % 2 !=0){
        std::cout<<numeros[i]<<std::endl;
      }
      
    }
    return 0;
}
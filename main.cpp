#include<iostream>
#include<windows.h> 
#include<string>


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string carros[5] = {"volvo", "BMW", "ford", "chevrolet", "fiat"};

    int tamanho = sizeof(carros) / sizeof(carros[0]);

    std::cout<<tamanho<<std::endl;

   // for (int i = 0; i < 5; i++)
    
    //    std::cout<<carros[i]<<std::endl;
    
    
    
    



      
    return 0;
}


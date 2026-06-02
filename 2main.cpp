#include<iostream>
#include<Windows.h>
#include<string>
#include<cctype>



int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero = 42;
    int* ptr = &numero;

    std::cout<<"Acessar via variavel: "<<numero<<std::endl;
    std::cout<<"Acessar via ponteiro: "<<*ptr<<std::endl;
   



    return 0;
}
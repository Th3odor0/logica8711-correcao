#include<iostream>
#include<Windows.h>

int quadrado(int n){
    return n * n;
}

int cubo(int c){
    return c * c * c;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout<<"Quadrado de 5: "<<quadrado(5)<<"cubo de 5"<<cubo(3)<<std::endl;
    std::cout<<"Quadrado de 8: "<<quadrado(8)<<"cubo de 8"<<cubo(6)<<std::endl;
    std::cout<<"Quadrado de 10: "<<quadrado(10)<<"cubo de 10"<<cubo(9)<<std::endl;


    return 0;
}
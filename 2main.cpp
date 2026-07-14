#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>


double calcularDobro(double valor1 ){
return valor1 * 2;
};


double calcularTriplo(double valor2){
    return valor2 * 3;
}



int main(){
 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
   float numero;
   
   std::cout<<"Digite um numero: "<<std::endl;
   std::cin>>numero;

    double resultado1 = calcularDobro(numero);
    double resultado2 = calcularTriplo(numero);

    std::cout<<"O dobro de "<<numero<<" e "<<resultado1<<std::endl;
    std::cout<<"O triplo de "<<numero<<" e "<<resultado2<<std::endl;

    
    return 0;
}
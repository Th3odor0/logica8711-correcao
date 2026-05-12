#include<iostream>

int main(){
    
    int num1, num2, soma, subt, mult, op;
    float div;

    std::cout<<"Digite aqui o valor para número 1: "<<std::endl;
    std::cin>>num1;

    std::cout<<"Digite aqui o valor para número 2: "<<std::endl;
    std::cin>>num2;

    std::cout<<"---- Escolha a operação ----"<<std::endl;
    std::cout<<"1 - Soma";
    std::cout<<"2 - Subtração";
    std::cout<<"3 - Multiplicação";
    std::cout<<"4 - Divisão";

    switch(op){
    case 1:
        soma = num1 + num2;
         std::cout<<"O resultado da soma é: "<<std::endl;
        break;
    case 2:
     subt = num1 - num2;
        std::cout<<"O resultado da subtração é: "<<std::endl;
        break;
        case 3:
        mult = num1 * num2;
          std::cout<<"O resultado da multiplicação é: "<<std::endl;
        break;
        case 4:
         div = num1 / num2;
         std::cout<<"O resultado da divisão é: "<<std::endl;

        break;
    }

    return 0;
}
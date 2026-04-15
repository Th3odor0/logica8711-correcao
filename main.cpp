#include<iostream>
#include<thread>
#include<chrono>

int main(){

    int opcao;

    std::cout<<"Digite um valor para opcao: "<<std::endl;
    std::cin>>opcao;

    switch (opcao)
    {
    case 1:
        std::cout<<"domingo"<<std::endl;
        break;
        case 2:
    std::cout<<"segunda-feira"<<std::endl;
   break;
    case 3:
    std::cout<<"terca-feira"<<std::endl;
    break;
    case 4:
    std::cout<<"quarta-feira"<<std::endl;
    break;
    case 5:
    std::cout<<"quinta-feira"<<std::endl;
    break;
    case 6:
    std::cout<<"sexta-feira"<<std::endl;
    break;
    case 7:
    std::cout<<"sabado"<<std::endl;
        break;
    default:
    std::cout<<"numero invalido"<<std::endl;
    }
    



      
    return 0;
}


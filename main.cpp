#include<iostream>
#include<windows.h> 
#include<string>


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    do{
        std::cout<<"Digite um valor para num: "<<std::endl;
        std::cin>>num;
  
        if(num < 1 || num > 10){
            std::cout<<"Entrada invalida!!"<<std::endl;
        }
    }while(num < 1 || num > 10);{
        std::cout<<"Obrigado!! você escolheu o número: "<<num<<std::endl;
    }
      
    return 0;
}


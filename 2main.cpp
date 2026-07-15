#include<iostream>
#include<string>
#include<windows.h>
#include<cstdlib>
#include<ctime>
#include<cmath>



int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    std::cout<<"soma do 1 a 100"<<std::endl;
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma  += i;
    }

    std::cout<<soma;
    
  

    return 0;
};
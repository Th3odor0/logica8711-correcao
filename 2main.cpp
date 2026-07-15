#include<iostream>
#include<string>
#include<windows.h>
#include<cstdlib>
#include<ctime>
#include<cmath>



int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout<<"Numeros impares de 1 ate 20:"<<std::endl;

    // Começa em 2, vai até 20, e aumenta de 2 em 2 (i += 2)
    for (int i = 1; i <= 20; i += 2) {
        std::cout << i << " ";
    }

    std::cout<<std::endl;
    
  

    return 0;
};
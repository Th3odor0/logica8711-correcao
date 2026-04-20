#include<iostream>
#include<windows.h> 
#include<string>


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string carros[5] = {"volvo", "BMW", "ford", "chevrolet", "fiat"};

    for (int i = 0; i < 5; i++)
    {
        std::cout<<carros[i]<<std::endl;
    }
    
    
    



      
    return 0;
}


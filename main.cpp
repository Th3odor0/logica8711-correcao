#include<iostream>
#include<windows.h> 
#include<string>


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

   int numeros[3];
   numeros[0] = 10;
    numeros[1] = 20;
     numeros[2] = 30;
    
    for (int i = 0; i < 3; i++)
    {
        std::cout<<numeros[i]<<std::endl;
    }
    



      
    return 0;
}


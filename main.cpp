#include<iostream>
#include<windows.h> 
#include<string>


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

   std::string letras [2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
   };
    
   std::cout<<letras[1][0]<<std::endl;


      
    return 0;
}


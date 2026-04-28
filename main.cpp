#include<iostream>
#include<windows.h> 
#include<string>
#include<vector>

void myFunction(std::string nome){
    std::cout<<nome<<std::endl;
    
    
    
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

   myFunction("Theodoro");
   myFunction("Nome");
    
    
      
    return 0;
}


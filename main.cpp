#include<iostream>
#include<windows.h> 
#include<string>
#include<vector>

void myFunction(){
    std::cout<<"Olá mundo!"<<std::endl;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

   myFunction();
    
    
      
    return 0;
}


#include<iostream>
#include<windows.h> 
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    std::cout<<"Digite um número"<<std::endl;
    std::cin>>num;
    
    std::cout<<num%2<<std::endl;
    
   if (num%2 == 0){
    std::cout<<"Este número é par"<<std::endl;
  }else{
    std::cout<<"Este número é ímpar"<<std::endl;
  }
    
   
    
    
      
    return 0;
}


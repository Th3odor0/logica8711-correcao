#include<iostream>
#include<windows.h> 
#include<string>


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

  int contagem = 10;

  while (contagem > 0)
  {
    std::cout<<contagem<<std::endl;
    contagem--;
  }
  
  std::cout<<"Feliz ano novo!!"<<std::endl;

      
    return 0;
}


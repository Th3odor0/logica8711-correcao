#include<iostream>
#include<Windows.h>
#include<format>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

  std::string nome = "Theodoro";

  std::string mensagem = std::format("Ola, {} voce tem {} anos.\n", nome);
  std::cout<<mensagem;



    return 0;
}
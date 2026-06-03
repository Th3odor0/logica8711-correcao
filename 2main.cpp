#include<iostream>
#include<Windows.h>
#include<string>
#include<cctype>

struct pessoa{
  std::string nome;
  int idade;
  float altura;
};


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

  pessoa pl;

  pl.nome = "Theodoro";
  pl.idade = 17;
  pl.altura = 1.72;

  std::cout<<"Nome: "<<pl.nome<<std::endl;
  std::cout<<"Idade: "<<pl.idade<<std::endl;
  std::cout<<"altura: "<<pl.altura<<std::endl;


    return 0;
}
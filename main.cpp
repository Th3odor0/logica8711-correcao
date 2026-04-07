#include<iostream>
#include<string>

int main(){

   std::string nome = "Theodoro";

   std::cout<<nome[0];
   std::cout<<nome[2];
   std::cout<<nome[nome.length() - 1]<<std::endl;
   nome[0] = 'A';
   std::cout<<nome<<std::endl;
   std::cout<<nome.at(0)<<std::endl;
    nome.at(0) = 'H';
    std::cout<<nome;


    return 0;
}


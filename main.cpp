#include<iostream>
#include<string>

int main(){

   std::string nome = "Theodoro";

   std::cout<<nome[0];
   std::cout<<nome[2];
   std::cout<<nome[nome.length() - 1]<<std::endl;
   nome[0] = 'A';
   std::cout<<nome<<std::endl;


    return 0;
}


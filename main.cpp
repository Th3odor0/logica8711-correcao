#include<iostream>
#include<string>

int main(){

   std::string nome;
   std::string sobrenome = " Ternus";

   std::cout<<"Digite seu nome: "<<std::endl;
   std::cin>>nome;

   std::cout<<nome.append(sobrenome);
 


    return 0;
}


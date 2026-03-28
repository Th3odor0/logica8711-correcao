#include<iostream>
#include<string>
int main(){

   std::string nome;
    int idade;
    float altura;

   std::cout<<"Qual seu nome:"<<std::endl;
   std::cin>>nome;
   
   std::cout<<"Qual e sua idade"<<std::endl;
   std::cin>>idade;
   
   std::cout<<"Qual e sua altura"<<std::endl;
   std::cin>>altura;
    
   std::cout<<"Bem-vindo(a) "<<nome<<"!!"<<std::endl;
    std::cout<<"Sua idade e "<<idade<<"!!"<<std::endl;
    std::cout<<"Sua altura e "<<altura<<"!!"<<std::endl;

    return 0;
}
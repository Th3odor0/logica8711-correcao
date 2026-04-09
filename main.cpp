#include<iostream>
#include<string>
#include<cmath>

int main(){

  std::string user;
  std::string senha;

  std::cout<<"Digite seu usuario de acesso: "<<std::endl;
  std::cin>>user;

  std::cout<<"Digite sua senha: "<<std::endl;
  std::cin>>senha;

  if(senha == "123456789"){
      std::cout<<"O usario "<<user<<" esta logado com sucesso!!"<<std::endl;
  }else{
      std::cout<<"Usuario ou senha invalidos!"<<std::endl;
  }
      
  
  

    return 0;
}


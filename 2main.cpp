#include<iostream>
#include<vector>


int main(){

  std::vector<int>numeros;

  numeros.push_back(10);
  numeros.push_back(20);
  numeros.push_back(30);
  numeros.push_back(40);
  
  std::cout<<"Números:";
  std::cout<<"Soma: ";

  for (int i = 0; i < numeros.size(); i++){
    std::cout<<numeros[i]<<" ";
  }

  int soma = 0;
  for (int i = 0; i < numeros.size(); i++){
    soma += numeros[i];
  }
  std::cout<<std::endl;

  std::cout<<"Somando Números: "<<soma<<std::endl;
  


  return 0;
};
#include<iostream>
#include<vector>


int main(){

  std::vector<int>numeros;

  std::cout<<"==== Acessar Elemento ===="<<std::endl;

  numeros.push_back(100);
  numeros.push_back(200);
  numeros.push_back(300);
  numeros.push_back(400);

  std::cout<<"Vector: ";
  for (int i = 0; i < numeros.size(); i++){
    std::cout<<numeros[i]<<std::endl;
  }
  std::cout<<std::endl;

  std::cout<<"Elemento na posicao 0: "<<numeros[0]<<std::endl;
  std::cout<<"Elemento na poiicao 2: "<<numeros[2]<<std::endl;
  std::cout<<"Ultimo elemento: "<<numeros[3]<<std::endl;
  
  

  return 0;
};
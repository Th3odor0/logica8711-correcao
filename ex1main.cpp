#include<iostream>

int main(){

 int numb[5] = {10, 20, 30, 40, 50};

 std::cout<<"==== 1. Exibir valores predefinidos ===="<<std::endl;

 std::cout<<"Numeros armazenados: "<<std::endl;
 for (int i = 0; i < 5; i++){
    std::cout<<numb[i]<<" ";
 }
 std::cout<<std::endl;


return 0;
};
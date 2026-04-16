#include<iostream>
#include<thread>
#include<chrono>

int main(){

    int soma = 0;

    for(int i = 1; i <= 5; i++){
        soma = soma + i;
    }
    
    std::cout<<"soma e: "<<soma<<std::endl;



      
    return 0;
}


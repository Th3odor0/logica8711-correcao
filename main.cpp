#include<iostream>
#include<thread>
#include<chrono>

int main(){

    

    for(int i = 1; i <= 2; ++i){
        std::cout<<"externo: "<<i<<std::endl;

        for(int j = 1; j <= 3; ++j){
            std::cout<<"interno: "<<j<<std::endl;
        }
        
    }
    



      
    return 0;
}


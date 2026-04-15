#include<iostream>
#include<thread>
#include<chrono>

int main(){

   for(int hiroshima = 10; hiroshima >= 0; hiroshima--){
    std::cout<<"a hiroshima ira explodir em..."<<hiroshima<<std::endl;
    
     std::this_thread::sleep_for(std::chrono::microseconds(500));
   }



      
    return 0;
}


#include<iostream>
#include<windows.h> 
#include<string>
#include<vector>

int myFunction(int x){
    return x * 2;    
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

   for (int i = 0; i < 5; i++){
    std::cout<<"O dobro de "<<i<<" é "<<myFunction(i)<<std::endl;
   }
   
    
    
      
    return 0;
}


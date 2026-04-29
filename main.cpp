#include<iostream>
#include<windows.h> 
#include<string>
#include<vector>

int myFunction(int x){
    return 5 + x;    
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

   std::cout<<myFunction(3)<<std::endl;
    
    
      
    return 0;
}


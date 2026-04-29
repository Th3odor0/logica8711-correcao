#include<iostream>
#include<windows.h> 
#include<string>
#include<vector>

int myFunction(int x, int y){
    return x + y;    
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

   std::cout<<myFunction(5, 3)<<std::endl;
    
    
      
    return 0;
}


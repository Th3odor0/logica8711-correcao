#include<iostream>
#include<windows.h> 
#include<string>
#include<vector>

void myFunction(float nota){
    if (nota >= 7)
    {
        std::cout<<"Status: Aprovado!"<<std::endl;
    }else{
        std::cout<<"Status: Reprovado!"<<std::endl;
    }
    
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float minhaNota = 8.5;
   
    myFunction(minhaNota);
    
    
      
    return 0;
}


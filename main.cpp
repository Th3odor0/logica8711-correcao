#include<iostream>
#include<windows.h> 
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

  int choice;
  float temp, converted;

   std::cout<<"---- Temperatura converter ----"<<std::endl;
   std::cout<<"1: celsius to fahrenheit"<<std::endl;
   std::cout<<"2: fahrenheit to celsius"<<std::endl;
   std::cout<<"choose an option (1 or 2): "<<std::endl;
   std::cin>>choice;

   if (choice == 1){
    std::cout<<"Enter temperatura in celsius: "<<std::endl;
    std::cin>>temp;
    converted = (temp * 1.8) + 32;
    std::cout<<temp<<"C is "<<converted<<" F. "<<std::endl;
   }else if (choice == 2){
    std::cout<<"Enter temparatura in Fahrenheit: "<<std::endl;
    std::cin>>temp;
    converted = (temp - 32) / 1.8;
    std::cout<<temp<<"F is "<<converted<<" C. "<<std::endl;
   }else{
    std::cout<<"Invalid option! Please restart."<<std::endl;
   }
   
    
    
      
    return 0;
}


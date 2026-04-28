#include<iostream>
#include<windows.h> 
#include<string>
#include<vector>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<std::string>cars = {"Volvo", "BMW", "Mercedes"};

    cars.push_back("Mazda");

    for (std::string car : cars)
    {
        std::cout<<car<<std::endl;
    }
    
    
      
    return 0;
}


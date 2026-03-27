#include<iostream>
#include<iomanip>

int main(){

    int a = 8;
    //int numero inteiro
    float b = 9.6;
    //float numero de ponto flutuante ocupa 4bytes
    double c = 4.6789456123;
    //double ocupa 8bytes


    std::cout<<std::fixed<<std::setprecision(10)<<c<<std::endl;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;

    return 0;
}
#include<iostream>
#include<Windows.h>
#include<string>
#include<cctype>

void dividir(int a, int b, int*quociente, int*resto){
  *quociente = a / b;
  *resto = a % b;
}


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

  int q, r;

  dividir(17, 5, &q, &r);

  std::cout<<"Quociente: "<<q<<", restos: "<<r<<std::endl;



    return 0;
}
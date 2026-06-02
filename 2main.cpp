#include<iostream>
#include<Windows.h>
#include<string>
#include<cctype>

bool ehpalidromo(std::string s, int inicio, int fim){
  if (inicio >= fim){
    return true;
  }
  if (s[inicio] != s[fim]){
    return false;
  }
  return ehpalidromo(s, inicio + 1, fim -1);
  
}


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string resp;

  
    
    std::cout<<"Digite um palindrome"<<std::endl;
    std::cin>>resp;

    //std::cout<<ehpalidromo(resp)<<std::endl;
    //puxando a função para dar v ou f 

    for (char &c : resp){
        c = std::tolower(c);
    }
    if (ehpalidromo(resp, 0, resp.length() - 1)){
        std::cout<<"È palindrome"<<std::endl;
    }else{
        std::cout<<"Não é palindrome"<<std::endl;
    }

    return 0;
}
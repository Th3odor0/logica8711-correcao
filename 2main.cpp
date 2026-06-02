#include<iostream>
#include<Windows.h>
#include<string>
#include<cctype>

bool ehpalidromo(std::string s){
    int inicio = 0;
    int fim = s.length() - 1;

    while (inicio < fim){
        if (s[inicio] != s[fim]){
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string resp;

  
    
    std::cout<<"Digite um palindrome"<<std::endl;
    std::cin>>resp;

    //std::cout<<ehpalidromo(resp)<<std::endl;
    //puxando a função para dar v ou f 

    for (int i = 0; i < resp.length(); i++){
        resp[i] = std::tolower(resp[i]);
    }
    if (ehpalidromo(resp)){
        std::cout<<"É palindrome!"<<std::endl;
    }else{
        std::cout<<"Não é palindrome!"<<std::endl;
    }
    //no primeiro for declaro os valores, no for eu declaro todo resultado 1 é palindrome, no else todo resultado 0 não é palindrome
    
    

    return 0;
}
#include<iostream>
#include<windows.h>
#include<string>


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string palavra = "prospeccao";
    std::string adivinha = "";
    int erros = 0;
    int maxErros = 6;
    bool ganhou = false;

    for (int i = 0; i < palavra.length(); i++){
        adivinha += "_";
    }
    
    std::cout<<"==== JOGP DA FORCA ===="<<std::endl;
    std::cout<<"Advinhe a palavra"<<std::endl;
    std::cout<<std::endl;

    while (erros < maxErros && !ganhou){
        std::cout<<"Palavra: ";
        for (int i = 0; i < adivinha.length(); i++){
            std::cout<<adivinha[i]<<"";
        }
        std::cout<<std::endl;
        std::cout<<"Erros: "<<erros<<"/"<<maxErros<<std::endl;
        std::cout<<std::endl;
        
        char letras;
        std::cout<<"Digite uma letra: ";
        std::cin>>letras;
        letras = std::tolower(letras);

        std::cout<<std::endl;

        bool encontrou = false;

        for (int i = 0; i < palavra.length(); i++){
            if (palavra[i] == letras){
                adivinha[i] = letras;
                encontrou = true;
            }
            
        }
        if (!encontrou){
            std::cout<<"Letras errada!"<<std::endl;
            erros++;
        }else{
            std::cout<<"Letra encontrada"<<std::endl;
        }
        std::cout<<std::endl;

        if (adivinha == palavra){
            ganhou = true;
        }
        
    }
    std::cout<<"========="<<std::endl;
    if (ganhou){
        std::cout<<"Parabéns Você venceu"<<std::endl;
        std::cout<<"A palavra era: "<<palavra<<std::endl;
    }else{
        std::cout<<"Game over Você perdeu"<<std::endl;
        std::cout<<"A palavra era: "<<palavra<<std::endl;
    }
    

    return 0;
}
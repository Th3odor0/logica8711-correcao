#include<iostream>
#include<string>

int main(){

    std::string nome;
    int idade;
    float altura;

   std::cout<<"Qual seu nome:"<<std::endl;
   std::cin>>nome;

   std::cout<<"Qual e sua idade"<<std::endl;
   std::cin>>idade;
   
   std::cout<<"Qual e sua altura"<<std::endl;
   std::cin>>altura;
    
   std::cout<<"Bem-vindo(a) "<<nome<<"!!"<<std::endl;
    std::cout<<"Sua idade e "<<idade<<"!!"<<std::endl;
    std::cout<<"Sua altura e "<<altura<<"!!"<<std::endl;

    if (idade < 0)
    {std::cout<<"Idade invalida! " <<std::endl; 
    }else if(idade <= 10 ){
        std::cout<<"Voce e um(a) crianca!"<<std::endl;
    }else if(idade <= 18){
        std::cout<<"voce e um adolesente"<<std::endl;
    }else if(idade <= 60){
        std::cout<<"voce e adulto(a)"<<std::endl;
    }else{
        std::cout<<"voce e um(a) senior"<<std::endl;
    }

    
    


      
    return 0;
}


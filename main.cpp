#include<iostream>
#include<windows.h> 
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    //variaveis
    std::string nomeCompleto;
    int idade;
    int cursos;
    int opcaoPagamento;
    double TDS = 14405.49;
    double Emfermagem = 15278;
    double ModelagemVestuario = 14844.79;
    float Desconto = 0.10;
    float CartaoCredito = 0.06;

    //informações cadastrais(inacabado)
    std::cout<<"Digite o nome completo do aluno"<<std::endl;
    std::getline(std::cin, nomeCompleto);


    //Escolhendo o curso(Polir mais tarde)
    std::cout<<"Escolha um curso"<<std::endl;
    std::cout<<"1--Tecnico de Emfermagem"<<std::endl;
    std::cout<<"2--Modelagem de Vesturaio"<<std::endl;
    std::cout<<"3--Tecnico de Desenvolvimeto de Sistemas"<<std::endl;
    std::cin>>cursos;

    if (cursos = 1){
        std::cout<<"O valor do curso é R$: "<<Emfermagem<<std::endl;
    }if (cursos = 2){
        std::cout<<"O valor  do curso é R$: "<<ModelagemVestuario<<std::endl;
    }if (cursos = 3){
     std::cout<<"O valor  do curso é R$: "<<TDS<<std::endl;

    }if (cursos < 0){
        std::cout<<"Opção inaválida digite Novamente"<<std::endl;
    }else{
     std::cout<<"Opção inaválida digite Novamente"<<std::endl;
    }
    //Escolhendo a forma de pagamento(inacabado)
    std::cout<<"Qual a forma de pagamento: "<<std::endl;
    std::cout<<"--- 1 - Pix"<<std::endl;
    std::cout<<"--- 2 - Dinheiro"<<std::endl;
    std::cout<<"--- 3 - Cartao"<<std::endl;
    std::cin>>opcaoPagamento;



    
    
    
    
    
    
    
    
      
    return 0;
}


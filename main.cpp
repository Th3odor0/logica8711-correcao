#include<iostream>
#include<windows.h> 
#include<string>
#include<limits>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    //variaveis cadastrais
    std::string nomeCompleto, email, cpf, dataNascimento;
    int idade, cursos, opcaoPagamento;
    int valorSelecionado;
    //cursos
    double TDS = 14.405;
    double Emfermagem = 15.278;
    double ModelagemVestuario = 14844.79;
    double Eadrh = 3355.00;
    double Eadcontabil = 3355.00;
    double Eadlogistica = 3751.00;
    double Licostura = 1.989;
    double Lipowerbi = 654.96;
    double Liexcel = 1.803;

    //pagamentos
    float Desconto = 0.10;
    float CartaoCredito = 0.06;

    //informações cadastrais(Terminado e funcionando)
    
    std::cout<<"-----Realize o seu Cadastro-----"<<std::endl;
    
    std::cout<<"Digite o nome completo do aluno:"<<std::endl;
    std::getline(std::cin, nomeCompleto);

    std::cout<<"Adicione seu Email:"<<std::endl;
    std::getline(std::cin, email);

    std::cout<<"Digite o seu cpf:"<<std::endl;
    std::cin>>cpf;

    std::cout<<"Digite sua data de nascimento:"<<std::endl;
    std::getline(std::cin, dataNascimento);

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout<<"Digite sua idade:"<<std::endl;
    std::cin>>idade;

    std::cout<<"----Cadastro Realizado----"<<std::endl;
    std::cout<<"Aluno: "<<nomeCompleto<<" CPF: "<<cpf<<std::endl;


    //Aba de modalidades(Concluido)
    std::cout<<"Escolha a Modalidade do Curso"<<std::endl;
    std::cout<<"1--Presencial"<<std::endl;
    std::cout<<"2--EAD"<<std::endl;
    std::cout<<"3--Cursos Livres"<<std::endl;
    std::cin>>cursos;


    //colocar opção de escolha(tds,modelagem,emfermagem) do curso e voltar(voltar para aba modalidades)inacabdo
    switch(cursos){
    case 1:
        int escolhaUm;
        std::cout<<"Nós temos esta lista de Cursos"<<std::endl;
        std::cout<<"1 - TDS Valor total: "<<TDS<<std::endl;
        std::cout<<"2 - Modelagem de Vestuario Valor total: "<<ModelagemVestuario<<std::endl;
        std::cout<<"3- Emfermagem Valor total: "<<Emfermagem<<std::endl;

        std::cout<<"Escolha um curso: "<<std::endl;
        std::cin>>escolhaUm;
        break;

    case 2:
        std::cout<<"Nós temos esta lista de Cursos"<<std::endl;
        std::cout<<"1 - Rh Valor total: "<<Eadrh<<std::endl;
        std::cout<<"2 - Logistica Valor total: "<<Eadlogistica<<std::endl;
        std::cout<<"3 - Contabil Valor total: "<<Eadcontabil<<std::endl;

        std::cout<<"Escolha um curso: "<<std::endl;
        std::cin>>escolhaUm;
        break;

    case 3:
        std::cout<<"Nós temos esta lista de Cursos"<<std::endl;
        std::cout<<"1 - Power Bi Valor total: "<<Lipowerbi<<std::endl;
        std::cout<<"2 - Costura Valor total: "<<Licostura<<std::endl;
        std::cout<<"3 - Excel Valor total: "<<Liexcel<<std::endl;

        std::cout<<"Escolha um curso: "<<std::endl;
        std::cin>>escolhaUm;
        break;
    }

   


    return 0;
}


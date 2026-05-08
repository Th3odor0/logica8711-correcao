#include<iostream>
#include<windows.h> 
#include<string>
#include<limits>
#include<iomanip>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Variáveis cadastrais
    std::string nomeCompleto, email, cpf, dataNascimento;
    int idade, cursos, escolhaCurso, opcaoPagamento;

    // Valor final do curso escolhido
    double valorCurso = 0;

    // Cursos
    double TDS = 14405.00;
    double Enfermagem = 15278.00;
    double ModelagemVestuario = 14844.79;

    double Eadrh = 3355.00;
    double Eadcontabil = 3355.00;
    double Eadlogistica = 3751.00;

    double Licostura = 1989.00;
    double Lipowerbi = 654.96;
    double Liexcel = 1803.00;

    // Pagamentos
    float descontoPix = 0.10;
    float jurosCartao = 0.06;

    // Cadastro
    std::cout<<"----- REALIZE O SEU CADASTRO -----"<<std::endl;

    std::cout<<"Digite o nome completo:"<<std::endl;
    std::getline(std::cin, nomeCompleto);

    std::cout<<"Digite seu email:"<<std::endl;
    std::getline(std::cin, email);

    std::cout<<"Digite seu CPF:"<<std::endl;
    std::getline(std::cin, cpf);

    std::cout<<"Digite sua data de nascimento:"<<std::endl;
    std::getline(std::cin, dataNascimento);

    std::cout<<"Digite sua idade:"<<std::endl;
    std::cin>>idade;

    std::cout<<"\nCadastro realizado com sucesso!\n"<<std::endl;

    // Modalidades
    std::cout<<"----- ESCOLHA A MODALIDADE -----"<<std::endl;
    std::cout<<"1 - Presencial"<<std::endl;
    std::cout<<"2 - EAD"<<std::endl;
    std::cout<<"3 - Cursos Livres"<<std::endl;

    std::cin>>cursos;

    switch(cursos){

        case 1:
            std::cout<<"\n--- CURSOS PRESENCIAIS ---"<<std::endl;
            std::cout<<"1 - TDS | R$ "<<TDS<<std::endl;
            std::cout<<"2 - Modelagem de Vestuário | R$ "<<ModelagemVestuario<<std::endl;
            std::cout<<"3 - Enfermagem | R$ "<<Enfermagem<<std::endl;

            std::cin>>escolhaCurso;

            switch(escolhaCurso){
                case 1:
                    valorCurso = TDS;
                    break;

                case 2:
                    valorCurso = ModelagemVestuario;
                    break;

                case 3:
                    valorCurso = Enfermagem;
                    break;

                default:
                    std::cout<<"Curso inválido!"<<std::endl;
                    return 0;
            }

            break;

        case 2:
            std::cout<<"\n--- CURSOS EAD ---"<<std::endl;
            std::cout<<"1 - RH | R$ "<<Eadrh<<std::endl;
            std::cout<<"2 - Logística | R$ "<<Eadlogistica<<std::endl;
            std::cout<<"3 - Contábil | R$ "<<Eadcontabil<<std::endl;

            std::cin>>escolhaCurso;

            switch(escolhaCurso){
                case 1:
                    valorCurso = Eadrh;
                    break;

                case 2:
                    valorCurso = Eadlogistica;
                    break;

                case 3:
                    valorCurso = Eadcontabil;
                    break;

                default:
                    std::cout<<"Curso inválido!"<<std::endl;
                    return 0;
            }

            break;

        case 3:
            std::cout<<"\n--- CURSOS LIVRES ---"<<std::endl;
            std::cout<<"1 - Power BI | R$ "<<Lipowerbi<<std::endl;
            std::cout<<"2 - Costura | R$ "<<Licostura<<std::endl;
            std::cout<<"3 - Excel | R$ "<<Liexcel<<std::endl;

            std::cin>>escolhaCurso;

            switch(escolhaCurso){
                case 1:
                    valorCurso = Lipowerbi;
                    break;

                case 2:
                    valorCurso = Licostura;
                    break;

                case 3:
                    valorCurso = Liexcel;
                    break;

                default:
                    std::cout<<"Curso inválido!"<<std::endl;
                    return 0;
            }

            break;

        default:
            std::cout<<"Modalidade inválida!"<<std::endl;
            return 0;
    }

    // Pagamento
    std::cout<<"\n----- FORMA DE PAGAMENTO -----"<<std::endl;
    std::cout<<"1 - PIX (10% de desconto)"<<std::endl;
    std::cout<<"2 - Cartão de Crédito (6% de juros)"<<std::endl;
    std::cout<<"3 - Dinheiro"<<std::endl;

    std::cin>>opcaoPagamento;

    switch(opcaoPagamento){

        case 1:
            valorCurso = valorCurso - (valorCurso * descontoPix);
            break;

        case 2:
            valorCurso = valorCurso + (valorCurso * jurosCartao);
            break;

        case 3:
            break;

        default:
            std::cout<<"Forma de pagamento inválida!"<<std::endl;
            return 0;
    }

    // Resumo final
    std::cout<<std::fixed<<std::setprecision(2);

    std::cout<<"\n===== RESUMO DA MATRÍCULA ====="<<std::endl;
    std::cout<<"Aluno: "<<nomeCompleto<<std::endl;
    std::cout<<"CPF: "<<cpf<<std::endl;
    std::cout<<"Email: "<<email<<std::endl;
    std::cout<<"Valor final do curso: R$ "<<valorCurso<<std::endl;

    return 0;
}


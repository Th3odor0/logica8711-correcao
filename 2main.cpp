#include<iostream>
#include<string>
#include<Windows.h>
#include<vector>


using namespace std;
struct Prudotos {
    int id;
    string produto;
    double preco; // Mudado para double para aceitar centavos
};

// Função do menu (apenas exibe as opções)
void menu() {
    cout << "\n=== MENU DE PRODUTOS ===\n";
    cout << "1. Adicionar Produto\n";
    cout << "2. Ver Lista de Produtos\n";
    cout << "3. Deletar Produto por ID\n"; // Nova opção
    cout << "4. Sair\n";                  // Mudou de 3 para 4
    cout << "Escolha uma opcao: ";
}


int main(){
 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 

    vector<Prudotos> listaDeProdutos; 
    int opcao;

    do {
        menu(); 
        cin >> opcao;
        cin.ignore(); 

        if (opcao == 1) {
            Prudotos novoProduto; 

            cout << "\nDigite o ID do produto: ";
            cin >> novoProduto.id;
            cin.ignore(); 

            cout << "Digite o nome do produto: ";
            getline(cin, novoProduto.produto); 

            cout << "Adicione o preco: ";
            cin >> novoProduto.preco;

            listaDeProdutos.push_back(novoProduto);
            cout << "Produto adicionado com sucesso!\n";

        } 
        else if (opcao == 2) {
            cout << "\n--- LISTA DE PRODUTOS CADASTRADOS ---\n";
            
            if (listaDeProdutos.empty()) {
                cout << "Nenhum produto cadastrado ainda.\n";
            } else {
                for (size_t i = 0; i < listaDeProdutos.size(); i++) {
                    cout << "ID: " << listaDeProdutos[i].id 
                         << " | Nome: " << listaDeProdutos[i].produto 
                         << " | Preco: R$" << listaDeProdutos[i].preco << "\n";
                }
            }
            cout << "-------------------------------------\n";
        } 
        // --- NOVA FUNÇÃO: DELETAR PRODUTO ---
        else if (opcao == 3) { 
            if (listaDeProdutos.empty()) {
                cout << "\nA lista esta vazia. Nao ha o que deletar.\n";
            } else {
                int idParaDeletar;
                cout << "\nDigite o ID do produto que deseja deletar: ";
                cin >> idParaDeletar;

                bool encontrado = false;

                // Percorre a lista procurando o produto com o ID digitado
                for (size_t i = 0; i < listaDeProdutos.size(); i++) {
                    if (listaDeProdutos[i].id == idParaDeletar) {
                        // Se encontrou, apaga o produto daquela posição (i)
                        listaDeProdutos.erase(listaDeProdutos.begin() + i);
                        cout << "Produto com ID " << idParaDeletar << " deletado com sucesso!\n";
                        encontrado = true;
                        break; // Para o laço pois o produto já foi encontrado e deletado
                    }
                }

                if (!encontrado) {
                    cout << "Produto com ID " << idParaDeletar << " nao foi encontrado.\n";
                }
            }
        } 
        else if (opcao == 4) {
            cout << "Saindo do programa...\n";
        } 
        else {
            cout << "Opcao invalida! Tente novamente.\n";
        }

    } while (opcao != 4); // O loop agora roda até a opção ser 4
   
    return 0;
}
 
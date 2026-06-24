#include<iostream>
#include<windows.h>
#include<cctype>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int matriz[3][4] = {
        {10,25,5,40},
        {15,8,30,12},
        {20,3,18,35}
    };

    int maior = matriz[0][0];
    int menor = matriz[0][0];
    int linhaM = 0, colunaM = 0;
    int linhaN = 0, colunaN = 0;

    std::cout<<"===== Min e Max em Matriz ====="<<std::endl;

    std::cout<<"Matriz: "<<std::endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            std::cout<<matriz[i][j]<<" ";

            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                linhaM = i + 1;
                colunaM = j + 1;
            }
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
                linhaN = i + 1;
                colunaN = j + 1;
            }
        }
        std::cout<<std::endl;
    }
    
    std::cout<<std::endl;
    std::cout<<"Maior: "<<maior<<" na posição ["<<linhaM<<"]["<<colunaM<<"]"<<std::endl;
    std::cout<<"Menor: "<<menor<<" na posição ["<<linhaN<<"]["<<colunaN<<"]"<<std::endl;

    return 0;
}

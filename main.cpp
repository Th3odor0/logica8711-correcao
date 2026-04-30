#include<iostream>
#include<windows.h> 
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //briAmount: valor em reais / exchangeRate: taxa de cambio / usdAmount: valor em dolares
    double briAmount, exchangeRate, usdAmount;

    std::cout<<"---- Currency converter: BRL to USD ----"<<std::endl;

    //entrada da taxa de cambio (quanto vale 1 dolar hoje)
    std::cout<<"Enter the current exchange rate (How much is 1 dollar in Reais?): "<<std::endl;
    std::cin>>exchangeRate;

    //entrada da quantia em reais que a pessoa deseja converter
    std::cout<<"Enter the amount in BRL(R$): "<<std::endl;
    std::cin>>briAmount;

    //verificação logica: garante que o valor informado seja positivo
    if (briAmount > 0){
        //calculo: divede o montante em reais pela taxa de cambio
        usdAmount = briAmount / exchangeRate;
        std::cout<<"You will have $"<<usdAmount<<" US Dollars."<<std::endl;
    }else{
        //mensagem de erro caso o valor de reais pela taxa de cambio
        std::cout<<"Error: Please enter a valid amount greater than zero."<<std::endl;
    }
    
   
    
    
      
    return 0;
}


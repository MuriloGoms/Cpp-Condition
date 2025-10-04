//Peca um ano e diga se ele eh bissexto ou nao, com base nas regras do calendario gregoriano (divisivel por 4, exeto se for divisivel por mais 100 mas nao por 400).

#include <iostream>

int main(){
    int ano;

    std::cout << "Digite o ano: ";
    std::cin >> ano;

    if(ano % 4 == 0){
        std::cout << "O ano digitado eh bissexto!";
    }
    else{
        std::cout << "O ano digitado nao eh bissexto :)";
    }
}
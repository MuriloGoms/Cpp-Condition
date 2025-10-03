// Faca um programa que receba um numero inteiro e informe se ele eh positivo, negativo ou zero

#include <iostream>

int main(){
    int num;

    std::cout << "Digite um numero: ";
    std::cin >> num;

    if(num > 0){
        std::cout << "O numero eh positivo!";
    }
    else if(num == 0){
        std::cout << "O numero digitado eh zero";
    }
    else {
        std::cout << "O numero digitado eh negativo :(";
    }
    return 0;
}
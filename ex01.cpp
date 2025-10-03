// peca ao usuario dois numeros e diga qual eh o maior ou se sao iguais

#include <iostream>

int main(){
    int num1;
    int num2;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    if(num1 > num2){
        std::cout << "O numero " << num1 << " eh maior do que o " << num2 << std::endl;
    }
    else if(num1 == num2){
        std::cout << "O numero " << num1 << " eh igual ao " << num2; 
    }
    else {
        std::cout << "O numero " << num1 << " eh menor do que " << num2;
    }
    return 0;
}
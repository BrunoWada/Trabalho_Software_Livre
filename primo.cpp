#include <iostream>
#include <cmath>

using namespace std;

// Função para verificar se um número é primo
// Retorna 1 (verdadeiro) se o número for primo
// Retorna 0 (falso) se o número não for primo
int Primo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    if (numero % 2 == 0) {
        if (numero == 2) {
            // É primo (o número 2)
            return 1; 
        } else {
            // É par, mas não é 2, então não é primo
            return 0; 
        }
    }
    // Verifica divisores ímpares a partir de 3 até a raiz quadrada do número
    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

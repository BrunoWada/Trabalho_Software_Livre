#include <iostream>
#include <cmath>

using namespace std;

// Funcao para verificar se um numero e primo
// Retorna 1 (verdadeiro) se o numero for primo
// Retorna 0 (falso) se o número nao for primo
int Primo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    if (numero % 2 == 0) {
        if (numero == 2) {
            // Eh primo (o numero 2)
            return 1; 
        } else {
            // Eh par, mas nao eh 2, então nao eh primo
            return 0; 
        }
    }
    // Verifica divisores impares a partir de 3 ate a raiz quadrada do numero
    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    cin >> num;
    
    // Chama a funcao Primo() para verificar se 'num' eh primo
    // Se a funcao retornar 1 (verdadeiro)
    if (Primo(num) == 1) { 
        cout << "Primo" << endl;
        // Se a funcao retornar 0 (falso)
        } else { 
            cout << "Nao eh primo" << endl; // Imprime "Nao eh primo" na tela
            }

    return 0;
}
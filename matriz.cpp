#include <iostream> 

using namespace std; 

int main() {
    int size; // Declara o tamanho das matrizes (lado N)
    cin >> size;       

    // Declaração das matrizes
    int matriz_1[size][size];   // Primeira matriz
    int matriz_2[size][size];   // Segunda matriz
    int Result[size][size];     // Matriz resultante

    // Leitura dos elementos da Matriz 1
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> matriz_1[i][j];

    // Leitura dos elementos da Matriz 2
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> matriz_2[i][j];
    
    char operation_type; // Declara variável para o tipo de operação
    cin >> operation_type; // Lê o caractere da operação ('a', 's', 'm')

    // Bloco condicional para realizar a operação escolhida
    if (operation_type == 'a') { // Se a operação for Adição
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                Result[i][j] = matriz_1[i][j] + matriz_2[i][j]; // Realiza a soma
    } else if (operation_type == 's') { // Se a operação for Subtração
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                Result[i][j] = matriz_1[i][j] - matriz_2[i][j]; // Realiza a subtração
    }

    return 0;
}
#include <iostream> 

using namespace std; 

int main() {
    int size; // Declara o tamanho das matrizes
    cin >> size;       

    // Declaracao das matrizes
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
    
    char operation_type; // Declara variavel para o tipo de operacao
    cin >> operation_type; // Le o caractere da operacao ('a', 's', 'm')

    // Bloco condicional para realizar a operacao escolhida
    if (operation_type == 'a') { // Se a operacao for Adicao
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                Result[i][j] = matriz_1[i][j] + matriz_2[i][j]; // Realiza a soma
    } else if (operation_type == 's') { // Se a operacao for Subtracao
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                Result[i][j] = matriz_1[i][j] - matriz_2[i][j]; // Realiza a subtracao
    } else if (operation_type == 'm') { // Se a operacao for Multiplicacao
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++) {
                Result[i][j] = 0; // Inicializa elemento do resultado com 0
                for (int k = 0; k < size; k++)
                    // Calcula o produto da matriz (linha por coluna)
                    Result[i][j] += matriz_1[i][k] * matriz_2[k][j];
            }
    } else {
        return 1; // Retorna 1 (codigo de erro) para operacao invalida
    }
    
    // Imprime a Matriz Resultante
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++){
            cout << Result[i][j] << " "; // Imprime o elemento e um espaco
        }
        cout << endl; // Quebra de linha apos cada linha da matriz
    }

    return 0;
}
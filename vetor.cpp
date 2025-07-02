#include <iostream> 

using namespace std;

int main()
{
    // Declara variaveis: tamanho, maior número.
    int size = 0, biggest = 0, i;
    
    // Le o tamanho do vetor
    cin >> size;
    // Declara o vetor com o tamanho lido
    int value[size]; 
    
    // Le os elementos do vetor
    for (i = 0; i < size; i++){
        cin >> value[i];
    }
    return 0; 
}
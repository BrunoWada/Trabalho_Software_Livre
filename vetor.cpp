#include <iostream> 

using namespace std;

int main()
{
    // Declara variaveis: tamanho, maior numero.
    int size = 0, biggest = 0, i;
    
    // Le o tamanho do vetor
    cin >> size;
    // Declara o vetor com o tamanho lido
    int value[size]; 
    
    // Le os elementos do vetor
    for (i = 0; i < size; i++){
        cin >> value[i];
    }
    // Inicializa o maior número com o primeiro elemento do vetor
    biggest = value[0];
    
    // Percorre o vetor para encontrar o maior número
    for (i = 1; i < size; i++){
        // Se o elemento atual for maior, atualiza 'biggest'
        if (biggest < value[i]){
            biggest = value[i];
        }
    }
    cout << biggest << endl;
    return 0; 
}
# Bruno Matos Wada

# Trabalho: Automatização de Testes para Programas em C++

O projeto contém três programas escritos em C++ ("primo", "vetor", "matriz"), cada um com scripts em Bash que geram casos de teste automaticamente. Um "Makefile" também está incluído para facilitar a compilação dos programas.  

É necessario um compilador c++ e bash (exemplo: git bash)

## 📁 Estrutura do Projeto

├── Makefile  
├── matriz.cpp  
├── vetor.cpp  
├── primo.cpp  
├── generate-test-matriz.sh  
├── generate-test-vetor.sh  
├── generate-test-primo.sh  
├── matriz.in / matriz.out  
├── vetor.in / vetor.out  
├── primo.in / primo.out  

## Programas

Em relação ao programas, são eles: primo.cpp, vetor.cpp e matriz.cpp.

### primo.cpp

O programa lê e verifica se um numero inteiro é primo ou não.

### vetor.cpp

O programa lê um vetor (conjunto de números) e mostra o maior valor.

### Matriz.pp

O programa lê duas matrizes quadradas (usuario determina o tamanho) e realiza operações basicas (adição, subtração e multiplicação).

## makefile

Compila os programas individualmente ou todos de uma vez.

### Compilando 

├── Para compilar todos, utilizar:  
    • make

├── Para compilar cada 1, utilizar:  
    • make primo  
    • make vetor  
    • make matriz  

├── Limpar os executáveis  
    • make clean.  

## Execução de teste (generate-test-*.sh)

Cada programa possui um script que gera automaticamente uma entrada de teste, executa o programa e salva a saída.  
Caso não tenha permissão para executar, utilizar:  
    • chmod +x generate-test-*.sh (x - da a permissão de executar o programa).  

./generate-test-primo.sh   - Gera primo.in e salva saída em primo.out  
./generate-test-vetor.sh   - Gera vetor.in e salva saída em vetor.out  
./generate-test-matriz.sh  - Gera matriz.in e salva saída em matriz.out  

## Exemplo para execução

./generate-test-primo.sh  
./primo < primo.in  

Ou então pode utilizar:  

make primo  
./generate-test-primo.sh  
cat primo.out  

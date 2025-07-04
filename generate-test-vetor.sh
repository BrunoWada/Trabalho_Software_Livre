#!/bin/bash
# Gera entrada de teste para o programa 'vetor' e executa se possível

ARQUIVO_IN="vetor.in"
ARQUIVO_OUT="vetor.out"

# Tamanho aleatório do vetor entre 5 e 20
TAM=$(( RANDOM % 16 + 5 ))
echo "$TAM" > "$ARQUIVO_IN"
echo "Tamanho do vetor: $TAM"

# Gera e escreve os elementos do vetor
echo "Elementos:"
for (( i = 0; i < TAM; i++ )); do
    NUM=$(( RANDOM % 2001 - 1000 ))  # de -1000 a 1000
    echo "$NUM" >> "$ARQUIVO_IN"
    echo "  $NUM"
done

# Executa o programa se compilado
if [[ -x ./vetor ]]; then
    ./vetor < "$ARQUIVO_IN" > "$ARQUIVO_OUT"
    echo "Saída gerada em $ARQUIVO_OUT:"
    echo "---------------------------"
    cat "$ARQUIVO_OUT"
    echo "---------------------------"
else
    echo "Executável 'vetor' não encontrado. Compile com: make vetor"
fi

#!/bin/bash

ARQUIVO_IN="primo.in"
ARQUIVO_OUT="primo.out"

# Gera número entre 1 e 10000
NUM=$(( RANDOM % 10000 + 1 ))
echo "$NUM" > "$ARQUIVO_IN"
echo "Número gerado para teste: $NUM"

# Executa o programa, se existir
if [[ -x ./primo ]]; then
    ./primo < "$ARQUIVO_IN" > "$ARQUIVO_OUT"
    echo "Saída gerada:"
    cat "$ARQUIVO_OUT"      # Mostra a saída no terminal
else
    echo "Executável 'primo' não encontrado. Compile com: make primo"
fi

#!/bin/bash

ARQUIVO_IN="primo.in"
ARQUIVO_OUT="primo.out"

# Gera um número entre 1 e 10000
NUM=$(( RANDOM % 10000 + 1 ))
echo "$NUM" > "$ARQUIVO_IN"
echo "Número gerado para teste: $NUM"

# Executa o programa se o executável existir
if [[ -x ./primo ]]; then
    ./primo < "$ARQUIVO_IN" > "$ARQUIVO_OUT"
    echo "Saída salva em $ARQUIVO_OUT"
else
    echo "Executável 'primo' não encontrado. Compile com: make primo"
fi

#!/bin/bash

ARQUIVO_IN="matriz.in"
ARQUIVO_OUT="matriz.out"

# Tamanho aleatório da matriz (2 a 5)
SIZE=$(( RANDOM % 4 + 2 ))
echo "$SIZE" > "$ARQUIVO_IN"
echo "Gerando entrada para matriz de tamanho ${SIZE}x${SIZE}"

# Gera a primeira matriz
echo "Matriz 1:"
for (( i = 0; i < SIZE; i++ )); do
    for (( j = 0; j < SIZE; j++ )); do
        VAL=$(( RANDOM % 21 - 10 ))
        echo -n "$VAL " >> "$ARQUIVO_IN"
        printf "%4d" "$VAL"
    done
    echo "" >> "$ARQUIVO_IN"
    echo ""
done

# Gera a segunda matriz
echo "Matriz 2:"
for (( i = 0; i < SIZE; i++ )); do
    for (( j = 0; j < SIZE; j++ )); do
        VAL=$(( RANDOM % 21 - 10 ))
        echo -n "$VAL " >> "$ARQUIVO_IN"
        printf "%4d" "$VAL"
    done
    echo "" >> "$ARQUIVO_IN"
    echo ""
done

# Seleciona operação aleatória
OPERACOES=('a' 's' 'm')
TIPO=${OPERACOES[$RANDOM % 3]}
echo "$TIPO" >> "$ARQUIVO_IN"
echo "Operação: $TIPO"

# Executa o programa
if [[ -x ./matriz ]]; then
    ./matriz < "$ARQUIVO_IN" > "$ARQUIVO_OUT"
    echo "Saída gerada em $ARQUIVO_OUT:"
    echo "---------------------------"
    cat "$ARQUIVO_OUT"
    echo "---------------------------"
else
    echo "Executável 'matriz' não encontrado. Compile com: make matriz"
fi

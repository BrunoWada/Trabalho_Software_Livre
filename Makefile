# Define o compilador C++
CXX = g++
# Define as flags de compilação para warnings
CXXFLAGS = -Wall -Wextra

# Lista dos arquivos-fonte
SRCS = matriz.cpp primo.cpp vetor.cpp
# Gera automaticamente a lista de executáveis a partir dos fontes
# (Ex: matriz.cpp -> matriz)
EXES = $(SRCS:.cpp=)

# .PHONY declara que 'all' e 'clean' não são arquivos reais.
.PHONY: all clean

# A regra 'all' (padrão) depende de todos os executáveis.
all: $(EXES)

# Regra de Padrão Genérica:
# Ensina o 'make' a criar qualquer executável (alvo %)
# a partir de um arquivo .cpp com o mesmo nome (dependência %.cpp).
# $@ é uma variável automática para o nome do alvo (ex: 'matriz').
# $< é uma variável automática para a primeira dependência (ex: 'matriz.cpp').
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Regra 'clean' mais robusta:
# Remove todos os executáveis listados em $(EXES).
# O hífen (-) no início do comando faz com que o 'make' ignore
# erros caso o comando 'rm' falhe (ex: se os arquivos não existirem).
clean:
	-rm -f $(EXES)
# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra

# Executáveis
EXES = primo vetor matriz

# Regra padrão: compilar todos os executáveis
all: $(EXES)

# Compilar primo
primo: primo.cpp
	$(CXX) $(CXXFLAGS) -o primo primo.cpp

# Compilar vetor
vetor: vetor.cpp
	$(CXX) $(CXXFLAGS) -o vetor vetor.cpp

# Compilar matriz
matriz: matriz.cpp
	$(CXX) $(CXXFLAGS) -o matriz matriz.cpp

# Limpar executáveis
clean:
	rm -f $(EXES)

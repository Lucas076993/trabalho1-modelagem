CXX = gcc
CFLAG = -lm -O2 # vamos utilizar otimização O2 ao longo do curso

all:
	$(CXX) monte_carlo.c main.c $(CFLAG) -o main.x

clean:
	@echo "Limpando arquivos já compilados..."
	@rm -rf *.o
	@rm -rf *.txt
	@rm -rf *.x
	@rm -rf *.dat
	@rm -rf *.pdf
	@sleep 2
	@clear

.PHONY: clean

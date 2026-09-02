CXX = gcc
CFLAG = -lm -O2 # vamos utilizar otimização O2 ao longo do curso

all:
	$(CXX) monte_carlo.c main.c $(CFLAG) -o main.x

mc50:
	$(CXX) monte_carlo_50.c main.c $(CFLAG) -o main.x

mse:
	$(CXX) monte_carlo_50.c mse.c $(CFLAG) -o mse.x

clean:
	@echo "Limpando arquivos já compilados..."
	@rm -rf *.o
	@rm -rf *.txt
	@rm -rf *.x
	@rm -rf *.dat
	@sleep 2
	@clear

.PHONY: clean

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "monte_carlo.h"

// bola de raio 1 (fronteira do meu problema)
double bola(double *x, size_t dim){
  double soma = 0;
  
  for(size_t i = 0; i < dim; ++i)
    soma += x[i] * x[i];
    
  return soma;
}

// função um
double um(double *x, size_t dim){
  return 1.0;
}


int main(int argc, char **argv){
  size_t dim, N, i;
  double *limInf, *limSup, integral; 
  campoEscalar unidade = &um;
  campoEscalar circ = &bola;
  
  // puxando parametros
  dim = strtoul(argv[1], NULL, 10);
  N = strtoul(argv[2], NULL, 10);

  limInf = (double *) malloc(dim * sizeof(double));
  limSup = (double *) malloc(dim * sizeof(double));
  
  for(i = 0; i < dim; ++i){
    limInf[i] = -1;
    limSup[i] = 1;
  }
  
  integral = monteCarlo(limInf, limSup, unidade, circ, N, dim);
  

  printf("%zu\t%lf\n", dim, integral);

  return 0;
}

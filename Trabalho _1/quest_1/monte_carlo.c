#include <stdio.h>

#include "monte_carlo.h"

// Função para integração via método de Monte Carlo n dimensional
double monteCarlo(double *limInf, double *limSup, campoEscalar f, campoEscalar g, size_t N, size_t dim){
  size_t acertos = 0;
  double *x, r, integral;
  
  x = (double *) malloc(dim * sizeof(double));
  
  // gerando pontos
  for(size_t i = 0; i < N; ++i){
    
    // gerando vetor aleatório
    for(size_t j = 0; j < dim; ++j){
      r = (double) rand() / RAND_MAX;
      
      x[j] = r * (limSup[j] - limInf[j]) + limInf[j];
      printf("%lf\t",x[j]);
    }
    
    // verificando se o ponto vai entrar ou não
    if(g(x, dim) <= f(x, dim))
      acertos++;
    printf("\n");
  }
  
  // calculando valor da integral
  integral = (double) acertos / N;
  for(size_t i = 0; i < dim; ++i)
    integral *= (limSup[i] - limInf[i]);
  
  return integral;
}


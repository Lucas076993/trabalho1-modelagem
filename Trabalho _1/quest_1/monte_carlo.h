#ifndef MONTE_CARLO_H
#define MONTE_CARLO_H

#include <stdlib.h>

// Ponteiro para campos escalares (primeira entrada é um vetor coordenada, segunda é a dimensão desse vetor)
typedef double (*campoEscalar)(double *, size_t); // professor, isso é puro preciosismo meu. vai funcionar que nem um código normal

//typedef bool (*condicao)(double *x, campoEscalar, campoEscalar, size_t)

// Função implementada no arquivo monte_carlo.c
double monteCarlo(double *limInf, double *limSup, campoEscalar f, campoEscalar g, size_t N, size_t dim);


#endif

#include <stdio.h>
#include <time.h>
#include "functions.h"

#define TAM 10000

int main () {
  clock_t start, end;
  int resultado, i, chave, dados[TAM];
  double tempoGasto;

  // Filling Array
  for(i = 0; i < TAM; i++) {
    dados[i] = i;
  }

  printf("Chave: ");
  scanf("%d", &chave);

  // Busca Sequencial
  start = clock();
  resultado = buscaSequencial(chave, dados, TAM);
  end = clock();
  tempoGasto = (double)(end - start) / CLOCKS_PER_SEC;
  printf("%-16s => %d | Tempo Gasto: %lfs\n", "Sequencial", resultado, tempoGasto);

  // Busca Binaria Recursiva
  start = clock();
  resultado = buscaBinariaRecursiva(chave, dados, 0, TAM);
  end = clock();
  tempoGasto = (double)(end - start) / CLOCKS_PER_SEC;
  printf("%-17s => %d | Tempo Gasto: %lfs\n", "Binária Rec.", resultado, tempoGasto);
  
  // Busca Binaria
  start = clock();
  resultado = buscaBinaria(chave, dados, TAM);
  end = clock();
  tempoGasto = (double)(end - start) / CLOCKS_PER_SEC;
  printf("%-17s => %d | Tempo Gasto: %lfs\n", "Binária", resultado, tempoGasto);

  return 0;
}

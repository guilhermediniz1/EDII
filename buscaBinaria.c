int buscaBinaria(int chave, int dados[], int TAM) {
  int inicio = 0, meio = TAM / 2, fim = TAM - 1;

  while(inicio <= fim) {
    meio = (inicio + fim) / 2;
    if(dados[meio] == chave)
      return meio;
    if(dados[meio] < chave)
      inicio = meio + 1;
    else
      fim = meio - 1;
  }
  return -1;
}

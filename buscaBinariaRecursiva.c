int buscaBinariaRecursiva(int chave, int dados[], int inicio, int fim) {
  int meio = (inicio + fim) / 2;

  if(inicio > fim)
    return -1;
  else if(dados[meio] == chave)
    return meio;
  else if(dados[meio] < chave)
    return buscaBinariaRecursiva(chave, dados, meio + 1, fim);
  else
    return buscaBinariaRecursiva(chave, dados, inicio, meio - 1);
}

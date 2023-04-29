int buscaSequencial(int chave, int dados[], int TAM) {
  for(int i = 0; i < TAM; i++) {
    if(dados[i] == chave) {
      return i;
    }
  }
  return -1;
}

void imprime_vetor(int vetor[], int tamanhoVetor) {
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void duplica_impares(int vetor[], int qtd) {

    for (int i = 0; i < qtd; i++) {
       if(vetor[i] % 2 != 0) {
           for (int j = qtd; j > i; j--) {
               int anterior = vetor[j-1];
               vetor[j] = vetor[j-1];
           }
           vetor[i+1] = vetor[i];
           i++;
       }
    }
}

void main() {

    int vet[8] = {1, 2, 3, 4, 5, -1, -1, -1};
    int size = sizeof(vet);

    imprime_vetor(vet, 8);
    duplica_impares(vet, 8);
    printf("\n");
    imprime_vetor(vet, 8);
}



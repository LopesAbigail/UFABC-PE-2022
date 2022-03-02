#include <stdio.h>

int eh_impar(int num) {
    if(num % 2 == 0) return 0;
    return 1;
}

void imprime_vetor(int vetor[], int tamanhoVetor) {
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("%d ", vetor[i]);
    }
}

void duplica_impares(int vetor[], int qtd) {
    int quantImpares = 0;

    // Descobrir quantos numeros sao impares
    for (int i = 0; i < sizeof(vetor); i++) {
        if (eh_impar(vetor[i]) == 1) {
           quantImpares++;
        }
    }

    // Criar vetor para receber os impares duplicados
    int tamanhoVetorImparesDuplicados = sizeof(vetor) + quantImpares;
    int vetorImparesDuplicados[tamanhoVetorImparesDuplicados];

    // Duplicar os numeros impares enquanto preenche o vetor de impares duplicados
    for (int i = 0; i < tamanhoVetorImparesDuplicados; i++) {
       vetorImparesDuplicados[i] = vetor[i];
       if(eh_impar(vetor[i]) == 1) {
           vetorImparesDuplicados[i+1] = vetor[i];
           i++;
       }
    }

    // Imprimir o vetor de impares duplicados
    imprime_vetor(vetorImparesDuplicados, tamanhoVetorImparesDuplicados);
}

void main() {
    int vetor[5] = {1, 2, 4, 5, 6};

    // Imprimir o vetor inicial
    imprime_vetor(vetor, sizeof(vetor));
    printf("\n");

    duplica_impares(vetor, duplica_impares);

}

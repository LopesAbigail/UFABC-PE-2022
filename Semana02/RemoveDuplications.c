#include <stdio.h>

void remover_duplicados(int vetor[], int qtd) {
  int i, j, k, qtd_intens_duplicados = 0;
  //int tamanho = sizeof(vetor) / sizeof(vetor[0]);

  // Percorre o vetor
  for (i = 0; i < qtd; i++) {
      // Para cada item,
      for(j = i+1; j < qtd; j++) {
          // Se o item seguinte for igual ao item atual
          if (vetor[i] == vetor[j]) {
              // Achei + um item duplicado
              qtd_intens_duplicados++;
              // Percorre os demais itens
              for (k = j; k < qtd-1; k++) {
                  // Remove o duplicado, passando todos os demais itens para a esquerda
                  vetor[k] = vetor[k+1];
              }
              //vetor[qtd-qtd_intens_duplicados] = -1;
              qtd--;
              j--;

            }

        }

    }

    printf("\nQunt duplicados: %d\n", qtd_intens_duplicados);

  imprime_vetor(vetor, qtd);
}

void imprime_vetor(int vetor[], int tamanhoVetor) {
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void main() {

    int vet[7] = {11, 22, 22, 33, 44, 44, 5};
    int size = sizeof(vet);

    printf("Original: ");
    imprime_vetor(vet, size);

    printf("\nDuplicados removidos: ");
    remover_duplicados(vet, size);
    imprime_vetor(vet, size);
}

/*
for (int i = 0; i < qtd; i++) {
       if(vetor[i] == vetor[i+1]) {
           for (int j = qtd; j > i; j--) {
               int anterior = vetor[j-1];
               vetor[qtd] = vetor[-1];
           }
           vetor[i+1] = vetor[i];
           i++;
       }
    }
*/

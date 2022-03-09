#include <stdio.h>

void imprime_vetor(int vetor[], int qtd) {
    int num = 0;
    int i = 0;

    while (i < qtd) {
        for (int j = i; j <= i+num; j++) {
            if (j == i+num) printf("%d", vetor[j]);
            else printf("%d ", vetor[j]);
        }
        num++;
        i += num;
        printf("\n");
    }
}

void main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    imprime_vetor(vetor, 10);
}

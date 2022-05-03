#include<stdio.h>
#include<stdlib.h>

void imprimeVetor(int *array, int size) {
    for(int i = 0; i < size; i++) {
        if(i < size-1) printf("%d ", array[i]);
        else printf("%d", array[i]);
    }

    printf("\n");
}

int compara(int a, int b, int* count) {

    (*count)++;

    return (a < b);

}

void insertionSort(int* v, int n) {
    int* count;
    count = malloc(sizeof(int));

    int i, k;

    imprimeVetor(v, n); // imprime vetor desordenado

    for (i = 1; i < n; i++) {

        int item_atual = v[i];
        int indice_para_inserir = i;

        for (k = i-1; k >= 0 && compara(item_atual, v[k], count); k--) {
            v[k+1] = v[k];
            indice_para_inserir--;
        }

        v[indice_para_inserir] = item_atual;

        imprimeVetor(v, n); // imprime DEPOIS de cada iteração
    }

    imprimeVetor(v, n); // imprime vetor COMPLETAMENTE ordenado

    printf("%d\n", *count);

    free(count);
}


int main(void) {
    int N, i;
    scanf("%d", &N);
    int *v = malloc(sizeof(int)*N);

    for (i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    insertionSort(v, N);

    free(v);
}

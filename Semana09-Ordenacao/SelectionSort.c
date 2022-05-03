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

void selectionSort(int* v, int n) {

    int i, k;
    
    int count = 0;
    //count = malloc(sizeof(int));
    
    imprimeVetor(v, n); // imprime vetor desordenado
    
    for (i = 0; i < n-1; i++) {
        int indice_menor = i;
        for (k = i+1; k < n; k++) {
            if (!(v[k] >= v[indice_menor])) {
                indice_menor = k;
                
            }
        }
        if (indice_menor != i) {
            int tmp = v[i];
            count++;
            v[i] = v[indice_menor];
            v[indice_menor] = tmp;
        }
        
        imprimeVetor(v, n);
    }
    
    imprimeVetor(v, n);
    
    printf("%d\n", count);
    
    //free(count);
}

int main(void) {
    int N, i;
    scanf("%d", &N);
    int *v = malloc(sizeof(int)*N);

    for (i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    selectionSort(v, N);

    free(v);
}

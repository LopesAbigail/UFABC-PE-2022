/* programa que roda - insereOrdnado2
// Não declare vetor com colchetes
// Use malloc para alocar o vetor (e lembre-se de usar free para liberar a memória alocada com malloc)
#include<stdio.h>
#include<stdlib.h>

// Inserir ordenado
void insertionSort(int array[], int size) {

    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;

        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
          --j;
        }

        array[j + 1] = key;
    }
}

// Imprimir um array
void printArray(int v[], int size) {

    for (int i = 0; i < size; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}

void main() {

    int len_array;
    scanf("%d", &len_array);

    double *array = malloc(sizeof(int) * len_array);
    int num, i, j, step = 0;

    while(num != -1) {

        // Ler entrada
        scanf("%d", &num);

        // Preparar o vetor geral
        array[step] = num;

        // Preparar vetor ordenado
        int sortedArray[step];
        for(i = 0; i < step; i++) {
            sortedArray[i] = array[i];
        }
        insertionSort(sortedArray, step);
        printArray(sortedArray, step);

        step++;
    }

    free(array);

}
*/


#include <stdio.h>
#include <stdlib.h>
int* cria_vetor(int n) {
int *vetor = malloc(sizeof(int) * n);
int i;
for (i = 0; i < n; i++)
vetor[i] = i+1;
return vetor;
}
int main() {
int *v = cria_vetor(5);
int i;
for (i = 0; i < 5; i++)
printf("%d ", v[i]);
printf("\n");
free(v);
return 0;
}

#include <stdio.h>
#define LEN 100

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

    int array[LEN];
    int num, i, j, step = 0;

    while(num >= 0) {

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

}

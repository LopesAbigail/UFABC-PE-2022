#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int linhas = 4;
    int colunas = 3;
    // vetor de ponteiros para as linhas
    // observe o sizeof(int*) --> ou seja, o tamanho de um ponteiro de int
    int **matriz = malloc(sizeof(int*) * linhas);
    // para cada ponteiro de linha, alocamos a linha inteira
    for (i = 0; i < linhas; i++) {
    matriz[i] = malloc(sizeof(int) * colunas);
    }
    // Agora a matriz está pronta e podemos colocar alguns valores
    for (i = 0; i < linhas; i++)
    for (j = 0; j < colunas; j++) {
    matriz[i][j] = (i+1)*(j+1);
    }
    // E depois podemos imprimir
    for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
    printf("%d ", matriz[i][j]);
    }
    printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void liberar_matriz(double **matriz, int n_linhas) {
    for (int i = 0; i < n_linhas; i++)
        free(matriz[i]);
    free(matriz);
}

int main() {
    int n_linhas = 3, n_colunas = 4, i = 0, j = 0;

    double **m;
    m = (double **)malloc(sizeof(double *) * n_linhas);

    // aloca matriz
    for (i = 0; i < n_linhas; i++) {
        // igual a m[i]
        *(m + i) = (double *)malloc(sizeof(double) * n_colunas);
    }

    // Como preencher em termos de posicao de ponteiros para que a matriz intercale 0 e 1?
    for (int i = 0; i < n_linhas; i++)
    for (int j = 0; j < n_colunas; j++) {
        if ((j % 2) != 0)
            // Estou na j-esima coluna da i-esima linha
            *(*(m + i) + j)  = 1.0;
        else *(*(m + i) + j)  = 0.0;
    }

    /*
    // Com colchetes
    for (int i = 0; i < n_linhas; i++)
    for (int j = 0; j < n_colunas; j++) {
        if (j % 2 != 0) m[i][j] = 1;
        else m[i][j] = 0;
    }
    */

    printf("MATRIZ:\n");
    // printa a matriz
    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j++) {
            printf("%.1f ", m[i][j]);
        }
        printf("\n");
    }

    liberar_matriz(m, n_linhas);

    return 0;
}


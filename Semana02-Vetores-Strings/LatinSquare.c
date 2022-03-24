#include <stdio.h>
#define DIMENSAO 9

// Codigo adaptado dos autores: Gustavo Araujo Carvalho e Yuri Alessandro: https://github.com/YuriAlessandro/Algoritmo/blob/master/sudoku.c

// Retorna 1 se os numeros forem unicos na linha e 0 se nao o for
int checaLinha (int matriz[DIMENSAO][DIMENSAO]) {

    int i, j, k, eh_numero_unico_na_linha = 1;

    for (i = 0; i < DIMENSAO && eh_numero_unico_na_linha; i++) {
        for (j = 0; j < DIMENSAO && eh_numero_unico_na_linha; j++) {
            for (k = 0; k < DIMENSAO && eh_numero_unico_na_linha; k++) {
                if ((j != k) && (matriz[i][j] == matriz[i][k]) && (matriz[i][j] != 0)) {
                    eh_numero_unico_na_linha = 0;
                }
            }
        }
    }

    return eh_numero_unico_na_linha;
}

// Retorna 1 se os numeros forem unicos na coluna e 0 se nao o for
int checaColuna (int matriz[DIMENSAO][DIMENSAO]){

    int i, j, k, lat = 1;

    for(j = 0; j < DIMENSAO && lat; j++)
        for(i = 0; i < DIMENSAO && lat; i++)
            for(k = 0; k < DIMENSAO && lat; k++)
                if (matriz[i][j] == matriz[k][j] && matriz[i][j] != 0) {
                    if((i != k) && (matriz[i][j] == matriz[k][j]) && (matriz[i][j] != 0))
                    lat = 0;
                }

    return lat;
}

// Retorna 1 se os numeros forem unicos na matriz[3][3] e 0 se nao o for
int checaSetorMenor (int mini[3][3]){

    int i, j, num, existe = 0;

    for(num = 1; num <= DIMENSAO; num++){
        for(i = 0; i < 3; i++)
            for(j = 0; j < 3; j++)
                if(mini[i][j] != 0) {
                    if(mini[i][j] == num) existe++;
                }
        if(existe > 1) return 0;
        existe = 0;
    }

    return 1;
}

// Retorna 1 se os numeros forem unicos em todos os setores matriz[3][3] e 0 se nao o for
int checaSetoresMenores (int matriz[DIMENSAO][DIMENSAO]){

    int i, j, k, l, mini[3][3];

    for(i = 0; i < DIMENSAO; i += 3)
        for(j = 0; j < DIMENSAO; j += 3){
            for(k = 0; k < 3; k++)
                for(l = 0; l < 3; l++)
                    mini[k][l] = matriz[k+i][l+j];
            if(!checaSetorMenor(mini))
                return 0;
        }

    return 1;
}

void main(){

    int dimensao_matriz = DIMENSAO;
    int matriz[dimensao_matriz][dimensao_matriz];

    for (int linha = 0; linha < dimensao_matriz; linha++) {
        for (int coluna = 0; coluna < dimensao_matriz; coluna++) {
            scanf("%d ", &matriz[linha][coluna]);
            //printf("%d ", matriz[i][j]);
        }
    }

    if(checaLinha(matriz) && checaColuna(matriz) && checaSetoresMenores(matriz))
        printf("SIM\n");
    else
        printf("NAO\n");
}

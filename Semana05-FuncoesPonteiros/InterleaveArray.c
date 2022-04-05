#include <stdio.h>
#include <stdlib.h>

int* cria_vetor (int n) {
    int *vetor = malloc(sizeof(int) * n);
    int i;
    for (i = 0; i < n; i++) scanf("%d", vetor + i);
    return vetor;
}

int *intercala(int *a, int *b, int n, int m){
    int i = 0, j = 0;
    int *c = (int*)malloc((n + m)*sizeof(int));
    int k = 0;
    while((i + j) < (n + m)){
        if(i >= n){
            for (; j < m; j++, k++){
                *(c+k) = *(b+j);
            }
            break;
        }
        else if(j >= m){
            for (; i < n; i++, k++){
                *(c+k) = *(a+i);
            }
            break;
        }
        if (a[i] < b[j])
            *(c+k) = *(a+i++);

        else {
            *(c+k) = *(b);
            j++;
        }

        k++;


    }
    return c;
}

int main() {

    // n eh o tamanho do vetor
    int n1 = 0, n2 = 0, k = 0;

    // monta o primeiro vetor
    scanf("%d", &n1);
    int *vetor1 = cria_vetor(n1);

    // monta o segundo vetor
    scanf("%d", &n2);
    int *vetor2 = cria_vetor(n2);

    // cria vetor intercalado
    int n3 = n1 + n2;
    int *vetor3 = intercala(vetor1, vetor2, n1, n2);

    // imprime vetor intercalado
    for(k = 0; k < n3; k++) {
        printf("%d ", *(vetor3 + k));
    }

    // limpando a memoria
    free(vetor1);
    free(vetor2);
    free(vetor3);

    return 0;
}

/* RODOU, MAS NAO RODOU

#include <stdio.h>
#include <stdlib.h>

int* cria_vetor (int n) {
    int *vetor = malloc(sizeof(int) * n);
    int i;
    for (i = 0; i < n; i++) scanf("%d", vetor + i);
    return vetor;
}

int *intercala(int *a, int *b, int n, int m){
    int i = 0, j = 0;
    int *c = (int*)malloc((n + m)*sizeof(int));
    int k = 0;

    while((i + j) < (n + m)){
        if(i >= n){
            for (; j < m; j++, k++){
                *(c+k) = *(b+j);
            }
            break;
        }
        else if(j >= m){
            for (; i < n; i++, k++){
                *(c+k) = *(a+i);
            }
            break;
        }
        if (*(a+i) < *(b+j))
            *(c+k) = *(a+i++);

        else {
            *(c+k) = *(b+j);
            j++;
        }

        k++;


    }

    return c;
}

int main() {

    // n eh o tamanho do vetor
    int n1 = 0, n2 = 0, i = 0, j = 0;

    // monta o primeiro vetor
    scanf("%d", &n1);
    int *vetor1 = cria_vetor(n1);

    // monta o segundo vetor
    scanf("%d", &n2);
    int *vetor2 = cria_vetor(n2);

    // cria vetor intercalado
    int *vetor3 = intercala(vetor1, vetor2, n1, n2);


    // imprime vetor intercalado
    for(i = 0; i < (n1+n2); i++) {
        printf("%d ", *(vetor3 + i));
    }

    // limpando a memoria
    free(vetor1);
    free(vetor2);
    free(vetor3);

    return 0;
}


*/

#include<stdio.h>
#include<stdlib.h>

int eh_impar (int num) {
    if(num % 2 == 0) return 0;
    return 1;
}

void duplica_impares_base(int vetor[], int qtd) {

    for (int i = 0; i < qtd; i++) {
       if(vetor[i] % 2 != 0) {
           for (int j = qtd; j > i; j--) {
               int anterior = vetor[j-1];
               vetor[j] = vetor[j-1];
           }
           vetor[i+1] = vetor[i];
           i++;
       }
    }

}

void *duplica_impares (int *v, int n_entrada, int *n_retorno) {

    int i = 0, quant_impares = 0;
    // vetor intermediario
    int vetor_int[100];

    // recebe o vetor por referencia e coloca cada item no vetor inteiro
    printf("\nVetor recebido...\n");
    for (i = 0; i < n_entrada; i++) {
        printf ("%d ", v[i]);
        // inserindo referencia no vetor inteiro
        vetor_int[i] = v[i];
    }

    // descobrir quantos numeros sao impares
    for (int i = 0; i < n_entrada; i++) {
        if (eh_impar(vetor_int[i]) == 1) {
           quant_impares++;
        }
    }

    //printf("\nIMAPRES: %d\n", quant_impares);

    int tamanho_vetor_retorno = n_entrada + quant_impares;
    //printf("\nTAM VETOR RETORNO: %d\n", tamanho_vetor_retorno);
    int v_retorno[tamanho_vetor_retorno];

    printf("\nDuplicando...\n");
    for (i = 0; i < tamanho_vetor_retorno; i++) {

        if(vetor_int[i] % 2 != 0) {
           for (int j = tamanho_vetor_retorno; j > i; j--) {
               int anterior = vetor_int[j-1];
               vetor_int[j] = vetor_int[j-1];
           }
           vetor_int[i+1] = vetor_int[i];
           i++;
       }

    }

    printf("\nVetor retornado\n");
    for (i = 0; i < tamanho_vetor_retorno; i++) {
        printf ("%d ", vetor_int[i]);
    }

    *n_retorno = tamanho_vetor_retorno;

    free(vetor_int);

    /*
    printf("\nv_retorno\n");
    for (i = 0; i < (n_entrada + quant_impares); i++) {
        v_retorno[i] = vetor_int[i];
        if (eh_impar(vetor_int[i]) == 1) {
           v_retorno[i] = vetor_int[i];
        }
        printf ("%d ", v_retorno[i]);
    }
    */


}

void main() {

    int vetor[6] = {1, 2, 4, 5, 7, 6};
    int n_entrada = 6;
    int *n_retorno = 0;

    // Imprimir o vetor inicial
    printf("Vetor inicial\n");
    //imprime_vetor(vetor, n_entrada);

    duplica_impares(vetor, n_entrada, n_retorno);

}

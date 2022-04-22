#include<stdio.h>
#include<stdlib.h>

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   int data;
   LinkedNode *next;
};

void impares_pares(LinkedNode *inicio, int *qtd_impares, int *qtd_pares){

    int pares = 0, impares = 0;

    // Enquanto nao chegar no final da lista ligada
    while(inicio != 0){
        // se o atributo valor da lista for par, incrementa pares
        if((inicio->data % 2) == 0){
           pares++;
        }
        // senao incrementa impares
        else {
            impares++;
        }

        inicio = inicio->next;
     }

     // valor do ponteiro eh igual ao valor das variaveis inteiras
     *qtd_impares = impares;
     *qtd_pares = pares;

}

int main(void) {
    void impares_pares(LinkedNode *inicio, int *qtd_impares, int *qtd_pares);


}

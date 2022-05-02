#include<stdio.h>
#include<stdlib.h>

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   int data;
   LinkedNode *next;
};

/*
    Retorna 1 se as listas forem iguais e 0 se nao o forem

    As listas são iguais apenas se tiverem o mesmo número de nós e os nós correspondentes tiverem os mesmos dados

*/
int comparar_listas(LinkedNode *inicio_lista1, LinkedNode *inicio_lista2) {

    // Enquanto nao chegar no final da lista1 ou no final da lista2
    while(inicio_lista1 != NULL && inicio_lista2 != NULL) {

        if(inicio_lista1->data != inicio_lista2->data) {
            return 0;
        }

        inicio_lista1 = inicio_lista1->next;
        inicio_lista2 = inicio_lista2->next;
    }

    // Se ambas forem iguais, aqui os ponteiros já estarão apontando para o valor nulo
    if (inicio_lista1 == NULL && inicio_lista2 == NULL)
        return 1;
    else
        return 0;

}

int main(void) {

    // Lista 1
    LinkedNode m1, m2, m3, m4;

    m1.data = 1;
    m2.data = 2;
    m3.data = 3;
    //m4.data = 4;

    m1.next = &m2;
    m2.next = &m3;
    m3.next = NULL;
    /*
    m3.next = &m4;
    m4.next = NULL;
    */

    // Lista 2
    LinkedNode m5, m6, m7;

    m5.data = 1;
    m6.data = 2;
    m7.data = 3;

    m5.next = &m6;
    m6.next = &m7;
    m7.next = NULL;

    LinkedNode *inicio_lista1 = &m1;
    LinkedNode *inicio_lista2 = &m5;

    int saoIguais = 0;

    saoIguais = comparar_listas(inicio_lista1, inicio_lista2);

    printf("Resultado: %d", saoIguais); // 1

    getchar();

    return 0;
}

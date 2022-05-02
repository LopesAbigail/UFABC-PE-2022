#include<stdio.h>

// Programa para procurar um valor em uma lista concatenada
typedef struct lista lista;
struct lista {
   int valor;
   lista *proximo;
};

/*
    Retorna o endereco de memoria da estrutura

    Recebe uma estrutura e o valor a ser procurado
    Fornecer endereco inicial da lista em que queremos procurar
*/
lista *procurarValor (lista *pLista, int numero) {
     // Enquanto nao chegar no final da lista ligada

     while(pLista != (struct lista *)0){
        // se o atributo valor da lista for igual ao numero recebido como parametro
        if(pLista->valor == numero){
           return(pLista);
        }
        else {
            pLista = pLista->proximo;
        }
     }

     // Se nao achar o valor, retorna o endereco de memoria de uma lista vazia
     return (struct lista *)0;

}

int main(void) {

    lista *procurarValor (lista *pLista, int numero);
    // membros da lista
    lista m1, m2, m3, m4, m5;
    lista *resultado, *gancho = &m1;
    int numero;

    m1.valor = 1;
    m2.valor = 2;
    m3.valor = 3;
    m4.valor = 4;
    m5.valor = 5;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = &m4;
    m4.proximo = &m5;
    m5.proximo = 0;

    printf("Valor a ser pesquisado: ");
    scanf("%i", &numero);

    // Vou receber ou nulo ou o valor procurado
    resultado = procurarValor(gancho, numero);

    if(resultado == (struct lista *)0) {
        printf("Valor nao encontrado.\n");
    } else {
        printf("Valor %i encontrado.\n", resultado->valor);
    }

    return 0;
}

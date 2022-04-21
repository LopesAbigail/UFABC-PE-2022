#include<stdio.h>
#include<stdlib.h>

int main (void){

    struct lista{
        int valor;
        struct lista *proximo; // cada ponteiro ira apontar para um item do tipo struct lista, que eh o proximo valor da lista ligada
    };

    struct lista m1, m2, m3;
    struct lista *gancho = &m1;

    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;

    m1.proximo = &m2;
    m2.proximo = &m3;
    // Apontando para uma estrutura lista cujo ponteiro tem um valor nulo
    m3.proximo = (struct lista *)0;

    // Percorrendo todos os elementos
    while(gancho != (struct lista *)0) {
        printf("%i\n", gancho->valor);
        gancho = gancho->proximo;
    }

    // A função getchar() retorna um valor, o caractere lido (mais precisamente, o código inteiro ASCII correspondente ao caractere)
    getchar();

    return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct DiscoVoador {
    char modelo[50];
    int velocidade, aceleracao, autonomia;
};

void insere_disco (struct DiscoVoador novo_disco, struct DiscoVoador discos[], int n_discos) {

    discos[n_discos] = novo_disco;
    int i, j;
    struct DiscoVoador aux;

    // autonomia
    for(i = 1; i < n_discos+1; i++) {
        aux = discos[i];
        for(j = i; (j > 0) && (aux.autonomia < discos[j - 1].autonomia); j--)
            discos[j] = discos[j - 1];
        discos[j] = aux;
    }

    // aceleracao
    for(i = 1; i < n_discos+1; i++) {
        aux = discos[i];
        for(j = i; (j > 0) && (aux.aceleracao < discos[j - 1].aceleracao); j--)
            discos[j] = discos[j - 1];
        discos[j] = aux;
    }

    //velocidade
    for(i = 1; i < n_discos+1; i++) {
        aux = discos[i];
        for(j = i; (j > 0) && (aux.velocidade < discos[j - 1].velocidade); j--)
            discos[j] = discos[j - 1];
        discos[j] = aux;
    }

}

typedef struct DiscoVoador disco_voador;

// Objetivo: inserir um novo disco de forma ordenada: velocidade, aceleracao, autonomia
int main() {
    disco_voador disco1 = {{'a'}, 5, 10, 15};
    disco_voador disco2 = {{'b'}, 6, 9, 17};
    disco_voador disco3 = {{'c'}, 5, 12, 18};
    disco_voador novo_disco = {{'D'}, 1, 12, 18};
    int n_discos = 3;
    int i = 0;

    struct DiscoVoador discos[] = {disco1, disco2, disco3};

    printf("\nANTES");
    for (i = 0; i < n_discos; i++) {
        printf("\nNome: %s - velocidade: %d - aceleracao: %d - autonomia: %d",
               discos[i].modelo, discos[i].velocidade, discos[i].aceleracao, discos[i].autonomia);
    }

    // inserir ordenado
    insere_disco(novo_disco, discos, n_discos);

    printf("\nDEPOIS");
    for (int i = 0; i < n_discos+1; i++) {
        printf("\nNome: %s - velocidade: %d - aceleracao: %d - autonomia: %d",
               discos[i].modelo, discos[i].velocidade, discos[i].aceleracao, discos[i].autonomia);
    }

    return 0;
}

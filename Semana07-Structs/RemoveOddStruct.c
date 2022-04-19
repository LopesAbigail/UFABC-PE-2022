#include<stdlib.h>
#include<math.h>

struct ListaNumeros {
    int *numeros;
    int *primos;
    int n_numeros, n_primos;
};

typedef struct ListaNumeros lista_numeros;

// Construtor
lista_numeros cria_lista_numeros(int *numeros, int *primos, int n_numeros, int n_primos){
    lista_numeros lista;
    lista.numeros = NULL;
    lista.primos = NULL;
}

int ehPrimo(int numero){

    int i, resultado = 0;

    for (i = 2; i <= (numero / 2); i++) {
       if (numero % i == 0) {
            resultado++;
            break;
       }
    }

    //if resultado == 0 eh primo else naoehprimo
    return resultado;
}

void separar_numeros_primos(lista_numeros *lista) {

    int i, j, num_removido = 0, n_primos = 0;
    int *primos = malloc(sizeof(int)*lista->n_numeros);
    lista->primos = malloc(sizeof(int)*lista->n_numeros);

    // Receber numeros
    // Percorrer o vetor de numeros, que tem n_numeros
    int quantidade_numeros = (lista->n_numeros) - 1;
    int aux = 0;
    for(i = 0; i < quantidade_numeros; i++) {
        // Procurar numeros primos e adiciona-los no vetor primos
        if (ehPrimo(lista->numeros[i]) == 0) {
            aux++;
            int numero = lista->numeros[i];
            lista->primos[aux-1] = numero;
            n_primos++;
        }
    }

    // Remove numeros primos
    for(i = 0; i < quantidade_numeros; i++) {
        for(j = i+1; j < quantidade_numeros; j++){
           if (ehPrimo(lista->numeros[i]) == 0) {
                lista->numeros[i] = lista->numeros[i+1];
           }
           quantidade_numeros--;
            j--;
        }
    }
    /* Duplica numeros primos
    if (ehPrimo(lista->numeros[i]) == 0) {
        int seguinte = lista->numeros[i];
        lista->numeros[i-1] = seguinte;
    }
    */

    lista->n_primos = n_primos;

    free(primos);

}

int main() {
    // com ponteiro
    lista_numeros *lista = malloc(sizeof(lista_numeros));
    int vetor[] = {1,2,3,4,5,6,7};
    lista->numeros = vetor;
    lista->n_numeros = 8;

    separar_numeros_primos(lista);

    free(lista);

    return 0;
}

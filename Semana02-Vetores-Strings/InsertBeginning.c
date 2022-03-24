#include <stdio.h>

int main (){

    int tam, i, x, aux = 0;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);

    int VetA[tam];

    for (i = 0; i < tam; i++) {
        printf ("Insira um valor qualquer:");
        scanf (" %d", &aux);
        for (x = i; x >= 0; x--) {
            if (x == 0) {
                VetA[x] = aux;
            } else {
                VetA[x] = VetA[(x-1)];
            }
        }
    }

    printf("\nVetor A\n");
    for (i = 0; i < tam; i++){
        printf ("%d\t", VetA[i]);
   }

    return 0;
}

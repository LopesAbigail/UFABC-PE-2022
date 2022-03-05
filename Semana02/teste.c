#include <stdio.h>
#define DIM 5
// Curso C Progressivo: www.cprogessivo.net
// O melhor curso de C! Online e gratuito !
// Artigos, apostilas, tutoriais e vídeo-aulas sobre
// a linguagem de programação C !

void recebe(int original[])
{
    int count = 0;

    for(count = 0; count < DIM ; count++)
    {
        printf("Entre com o elemento %d: ", count+1);
        scanf("%d", &original[count]);
    }
}

void copiar(int copiado[], int original[])
{
    int count;

    for(count=0 ; count < DIM ; count++)
        copiado[count] = original[count];
}

void dobrar(int dobrado[], int original[])
{
    int count;

    for(count=0 ; count < DIM ; count++)
        dobrado[count] = 2 * original[count];
}

void exibir(int vet[])
{
    int count;

    for(count=0 ; count < DIM ; count++)
        printf("%3d ", vet[count]);
}

int main(void)

{
    int original[DIM],
        copia[DIM],
        dobrado[DIM];

    recebe(original);
    copiar(copia, original);
    dobrar(dobrado, original);

    printf("Vetor original: ");
    exibir(original);

    printf("\nVetor copiado : ");
    exibir(copia);

    printf("\nVetor dobrado : ");
    exibir(dobrado);

    return 0;
}

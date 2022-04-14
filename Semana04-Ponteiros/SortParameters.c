#include <stdio.h>

void inverte(int *x, int *y) {

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void ordena(int *a, int *b, int *c)
{
    // Receber 3 ponteiros
    // comparar os valores para os quais cada ponteiro aponta
    // Trocar valores de apontamento, de modo que A aponte para o menor, B para o mediano e C para o maior dos valores
    int temp = 0;
    if (*a > *c) {
        temp = 0;
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*a > *b) {
        temp = 0;
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*b > *c) {
        temp = 0;
        temp = *b;
        *b = *c;
        *c = temp;
    }


}

int main() {
    void inverte(int *a, int *b);
    void ordena(int *a, int *b, int *c);
    int num_a, num_b, num_c;

    num_a = 50;
    num_b = 90;
    num_c = 15;

    // Inverte
    // passar como parametro o endereco de memoria dos ponteiros
    printf("BEFORE %d %d %d", num_a, num_b, num_c);
    ordena(&num_a, &num_b, &num_c);
    printf("\nAFTER %d %d %d", num_a, num_b, num_c);

}

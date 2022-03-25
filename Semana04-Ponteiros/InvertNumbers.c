#include <stdio.h>

void inverte(int *a, int *b) {

    int temp_a;
    temp_a = *a;
    *a = *b;
    *b = temp_a;
}

int main() {
    //void inverte(int *a, int *b);
    int num_a, num_b;

    num_a = 50;
    num_b = 90;

    // Inverte
    // passar como parametro o endereco de memoria dos ponteiros
    printf("BEFORE %d %d", num_a, num_b);
    inverte(&num_a, &num_b);
    printf("\nAFTER %d %d", num_a, num_b);

}

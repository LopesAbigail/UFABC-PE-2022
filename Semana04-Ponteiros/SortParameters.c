void ordena(int *a, int *b, int *c) {
    // Receber 3 ponteiros
    // comparar os valores para os quais cada ponteiro aponta
    // Trocar valores de apontamento, de modo que A aponte para o menor, B para o mediano e C para o maior dos valores

    int maior, medio, menor = 0;
    // Acha o menor, comparando os inteiros apontados por a, b e c
    if ( (a < b) && (b < c) ) {
        menor = a;
    } else if ( (a >= b) && (b < c) ) {
        menor = b;
    } else {
        menor = c;

    }

    *a = menor;
    *b = medio;
    *c = maior;
}

int main() {

}

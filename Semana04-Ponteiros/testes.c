#include <stdio.h>

void operacao_int(int a, int b, char op, int* res) {

    int resultado_inteiro = 0;

    switch(op) {
        case '+':
            resultado_inteiro = a + b;
            printf("SOMA: %d ", resultado_inteiro);
            break;
        case '^':
            resultado_inteiro = a ^ b;
            break;
        case '-':
            resultado_inteiro = a - b;
            break;
        case '*':
            resultado_inteiro = a * b;
            break;
        case '/':
            resultado_inteiro = a / b;
            break;
        case '%':
            resultado_inteiro = a % b;
            break;
        case '|':
            resultado_inteiro = a | b;
            break;
        case '&':
            resultado_inteiro = a & b;
            break;

    }

    res = &resultado_inteiro;
    *res = resultado_inteiro;

    printf("\nPonteiro: \n%d", *res);

}



// o que acontece com o retorno do ponteiro?
void main() {


    int* res;
    int a = 3;
    int b = 2;
    char op = '%';

    operacao_int(a, b, op, *res);




    /*
    //Acessando o valor no endereço
    int n = 507;
    int p = 1;

    int *ptr;
    ptr = &n;
    *ptr = *ptr + p;

    printf("%d\n", n);
    // conteudo para o qual o ponteiro aponta
    printf("%d\n", *ptr);
    // endereço
    printf("%p\n", *ptr);
    */
}

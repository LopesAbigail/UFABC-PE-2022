void operacao_int(int a, int b, char op, int* res) {

    int resultado_inteiro = 0;

    switch(op) {
        case '+':
            resultado_inteiro = a + b;
            printf("%d ", resultado_inteiro);
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

    printf("\nPonteiro com D: %d", *res);
    printf("\nPonteiro com P: %p", *res);

    printf("\nValor inteiro com D: %d", res);
    printf("\nValor inteiro com P: %p", res);

}

void main() {

    int* res;
    int a = 3;
    int b = 2;
    char op = '%';

    operacao_int(a, b, op, *res);
}

#include <stdio.h>

int multiplicacao_russa(int a, int b) {
    // O numero a vai sendo dividido e o b multiplicado por 2 ateh que o valor de a seja 1 (caso base)
    // quando esse 1 for alcancado, o valor de b sera retornado
    if (a == 1) return b;
    // Se o numero for impar, a soma tambem recebe o valor de b
    if (a % 2 != 0) return b + multiplicacao_russa((a/2), (2*b));
    // senao, a continua sendo dividido por 2 e b multiplicado pelo mesmo ateh que o caso base seja atingido
    else return multiplicacao_russa((a/2), (2*b));

}

void main() {
    int num1, num2, mult;
    scanf("%d %d ", &num1, &num2);

    mult = multiplicacao_russa(num1, num2);
    printf("%d ", mult);
}

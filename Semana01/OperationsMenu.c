#include <stdio.h>

int main()
{

    int escolha, a, b, c, operacao;
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        scanf(" %d", &a);
        scanf(" %d", &b);
        operacao = a + b;
        printf(" %d", operacao);
        break;

    case 2:
        scanf(" %d", &a);
        scanf(" %d", &b);
        scanf(" %d", &c);
        operacao = a + b + c;
        printf(" %d", operacao);
        break;

    case 3:
        scanf(" %d", &a);
        scanf(" %d", &b);
        operacao = a * b;
        printf(" %d", operacao);
        break;

    default:
        break;
    }

    printf("\n");
    printf("%d", operacao);
}
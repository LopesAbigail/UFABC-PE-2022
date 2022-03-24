#include <stdio.h>

int contafreq(int num, int digito) {

    if (num == 0) {
        return 0;
    }
    else {
        if ((num % 10) == digito) {
            num = num / 10;
            return 1 + contafreq(num, digito);
        } else {
            num = num / 10;
            return contafreq(num, digito);
        }
    }
}

void main () {
    int num, digito, freq = 0;

    //printf("Numero e digito: ");
    scanf("%1d", &num);
    scanf("%1d", &digito);

    freq = contafreq(num, digito);

    printf("\nFrequencia %d ", freq);
}

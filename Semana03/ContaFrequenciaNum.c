#include <stdio.h>

int contafreq(int num, int digito) {
   int count = 1;

   if (num >= 10)
   {
       num = num / 10;
       if ((num % 10) != 0)
       {
           count = 1 + contafreq(num, digito);
       }
       else
       {
           count = contafreq(num, digito);
       }

   }

   return count;

}

void main () {
    int num, digito, freq = 0;
    num = 1222222422;
    digito = 2;

    //printf("Numero: ");
    //scanf("%1d", &num);

    //printf("\nDigito: ");
    //scanf("%1d", &digito);

    freq = contafreq(num, digito);

    printf("\nFrequencia %d ", freq);
}

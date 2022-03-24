#include <stdio.h>

int pow (int numero, int expoente) {

	if(expoente == 0) {
       return 1;
	} else if(expoente == 1) {
	    return numero;
	} else {
	    return numero*pow(numero,expoente-1);
	}
}

int dec2bin(int n_decimal) {

    if (n_decimal == 0) {
        return 0;
    }

    else {
        // retorno: resto da divisao do numero decimal por dois + 10 vezes o resto do numero decimal dividido por dois
        // Nota: o primeiro numero corresponde ao que sera executado em looping na recursao do algoritmo
        // o segundo eh um processamento que soma a esse lasso para se atingir dado objetivo
        return (n_decimal % 2) + (10 * (dec2bin( (n_decimal/2) ) ) );
    }
}

void decimalToBinary(int num) {
    long long int binNumber = 0;
    int power = 0;

    while (num > 0) {
        int rem = num % 2;
        long long int temp = pow(10, power);
        binNumber += rem * temp;
        power++;
        num /= 2;
    }

    printf("%1ld", binNumber);
}

int main() {
   int num = 3;
   //decimalToBinary(num);
   int result = dec2bin(num);
   printf("%d ", result);
   return 0;
}

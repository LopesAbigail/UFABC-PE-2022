#include <stdio.h>

void main() {
    double x = 0.5;
    int n = 10;

    // 1*x^1 + 2*x^2 + 3*x^3 + ...
    int valor = multi(2, 3);
    printf("\nO valor da multi eh: %d", valor);
}

int pow (int numero, int expoente) {

	if(expoente == 0) {
       return 1;
	} else if(expoente == 1) {
	    return numero;
	} else {
	    return numero*pow(numero,expoente-1);
	}
}

// output: 1*x^1 + 2*x^2 + 3*x^3 + ...
int multi (int x, int serie) {
    int valor = 0;

    for (int i = 1; i <= serie; i++) {
        int power = pow(x, i);
        valor += i * power;
    }

    return valor;
}

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

int multi (int x, int serie) {
    int valor = 0;

    for (int i = 1; i <= serie; i++) {
        int power = pow(x, i);
        valor += i * power;
    }

    return valor;
}

double logaritmo (double x, int n) {
    // Codigo da funcao aqui
    double valor;

    for (int i = 1; i <= n; i++) {
        double power = pow(x, i+1);
        valor += (1.0/x) - (1.0/(x+ (double) i)) * power;
    }

    return valor;
}

void main() {
    double x = 0;
    int n = 0;
    //printf("Insira um numero para calcular o log: ");
    //scanf("%lf", &x);
    //printf("\nValor de n: ");
    //scanf("%d", &n);
    x = 0.5;
    n = 10;

    double logX = 0;
    logX = logaritmo(x, n);

    //printf("\nO valor do log eh: %lf", x);
    //int power = pow(2, 5);
    //printf("Potencia de 2: %d", power);
    int valor = multi(2, 3);
    printf("\nO valor da multi eh: %d", valor);
}

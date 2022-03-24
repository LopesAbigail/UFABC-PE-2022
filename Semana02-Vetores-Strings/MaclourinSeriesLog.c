#include <stdio.h>

// output: (1/1)*x - (1/2)*x*x + (1/3)*x*x*x - (1/4)*x*x*x*x + ... + (1/n)*x (n[times])
double logaritmo (double x, int n) {
    x -= 1;
    // x fora do intervalo em que a somatória converge
    if (x < -1.0 || x > 1.0) {
        return 0.0;
    }

    double resultado = x;
    double expoente = x;

    for (int i = 2; i <= n; i++) {
        expoente *= x;
        if (i % 2 == 0) {
            resultado -= expoente * 1.0/i;
        } else {
            resultado += expoente * 1.0/i;
        }
    }

    return resultado;

}

void main() {
    double x = 0.5;
    int n = 10;
    // output:  -0.69306

    double log = logaritmo(x, n);
    printf("%lf", log);

}

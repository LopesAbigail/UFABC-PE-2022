#include<math.h>

float calculateSD(int data[], int n) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < n; ++i) {
        sum += data[i];
    }
    mean = sum / n;
    for (i = 0; i < n; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / n);
}

#include "vetor.h"

void estatisticas_vetor(int vetor[], int n, int *min, int *max, int *soma, double *media, double *desvio) {

    int i = 0, menor = 999, maior = -999, somatorio = 0;
    double media_double = 0.00, soma_double = 0.00, raiz = 0.00;
    float desvio_double = 0.00;

    for (i = 0; i < n; i++){
        if (vetor[i] <= menor) menor = vetor[i];
        if (vetor[i] >= maior) maior = vetor[i];

        soma_double += vetor[i];
    }

    media_double = (soma_double / n);

    for (i = 0; i < n; ++i){
        //somatorio += ((vetor[i]*vetor[i]) - 2*vetor[i]*media_double + (media_double*media_double));
        double indice_double = vetor[i];
        somatorio += pow((indice_double - media_double), 2);
    }

    raiz = (somatorio / n);
    desvio_double = calculateSD(vetor, n);

    *min = menor;
    *max = maior;
    *soma = soma_double;
    *media = media_double;
    *desvio = desvio_double;
}

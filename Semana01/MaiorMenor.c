#include <stdio.h>

int main (){
    
    float a, maior, media, menor, soma = 0;
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        scanf(" %f", &a);
        soma += a;
        
        if (i == 1){
            menor = a;
            maior = a;
        }
        
        if (a > maior){
            maior = a;
        }
    }
    
    if (n > 1){
        media = soma/n;
    } else {
        media = soma;
    }
    
    printf("%.2f\n", menor);
    printf("%.2f\n", maior);
    printf("%.2f\n", media);
    
    return 0;
}
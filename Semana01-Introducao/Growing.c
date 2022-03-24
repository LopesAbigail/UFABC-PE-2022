#include <stdio.h>

int ehPrimo (int n);

int main (){
    
    int a, b, quantidadePrimos = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    
    for (int i = a; i <= b; i++){
        int n = ehPrimo(i);
        if (n == 1){
            quantidadePrimos++;
        }
    }
    
    printf("%d", quantidadePrimos);
    
    return 0;
}

int ehPrimo (int n){
    int divisores = 0;
    
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            divisores ++;
        }
    }
    
    if (divisores == 2){
        return 1;
    } else{
        return 0;
    }
}
#include <stdio.h>

int main (){
    
    int n = 0;
    scanf("%d", &n);
    
    int i = 1;
    while (i*(i+1)*(i+2) < n){
        i = i + 1;
    }
    
    if ( i*(i+1)*(i+2) == n){
        printf("SIM\n");
    }
    else{
        printf("NAO\n");
    }
    
    return 0;
}
#include <stdio.h>

long fatorial(int n) {
    if (n == 0) return 1;

    return n * fatorial(n-1);
}

long superfatorial(int n) {
   if (n == 0) return 1;
   // fatorial vezes fatorial
   return (n * superfatorial(n-1)) * fatorial(n-1);
}

void main() {
    int num = 0;
    long super = 0;

    scanf("%ld", &num);

    super = superfatorial(num);
    printf("%d ", super);
}


#include <stdio.h>
#include <stdlib.h>
int* cria_vetor(int n) {
int *vetor = malloc(sizeof(int) * n);
int i;
for (i = 0; i < n; i++)
vetor[i] = i+1;
return vetor;
}
int main() {
int *v = cria_vetor(5);
int i;
for (i = 0; i < 5; i++)
printf("%d ", v[i]);
printf("\n");
free(v);
return 0;
}

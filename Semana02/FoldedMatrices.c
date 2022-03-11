#include <stdio.h>

int main() {
    float matriz[4][3];
    int i, j, c = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = ++c;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*
void main() {
    int matriz[4][3];
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = (i+1) * (j+1);
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}
*/

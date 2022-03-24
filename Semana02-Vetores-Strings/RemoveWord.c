#include <stdio.h>


void remover_palavra(int i, char line[]) {

    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin); // take input


    for (int i = 0, j; line[i] != '\0'; ++i) {

      // enter the loop if the character is not an alphabet
      // and not the null character
      while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
         for (j = i; line[j] != '\0'; ++j) {

            // if jth element of line is not an alphabet,
            // assign the value of (j+1)th element to the jth element
            line[j] = line[j + 1];
         }
         line[j] = '\0';
      }
    }
    printf("Output String: ");
    puts(line);

}



void printMat(int col, char matriz[][col]) {
    int i, j = 0;
    for (i = 0; matriz[i] != '\0'; i++) {
        for (j = i; j < col; j++) {
            printf("%s ", matriz[i][j]);
        }
    }
}


void main () {
    char frase[100];

    fgets(frase, sizeof(frase), stdin); // take input

    char matAuxiliar[100][100];

    for (int step = 0; frase[step] != '\0'; step++) {
        for (int step2 = step; frase[step2] != '\0'; step2++) {
            if (frase[step2] != ' ')
                matAuxiliar[step][step2] = frase[step2];
        }
    }

    printMat(10, matAuxiliar);



    puts(frase);


   return 0;
}

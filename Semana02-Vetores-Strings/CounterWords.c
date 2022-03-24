#include <stdio.h>
#define QTD 100

void main () {

    char phrase[QTD];
    int amount_words = 0;

    scanf("%[^\n]s", phrase);

    for (int i=0; phrase[i] != '\0'; i++) {
        if (phrase[i] == ' ') amount_words++;
        if (phrase[i] == ' ' && phrase[i+1] == ' ') amount_words--;
    }

    // amount_words+1 -> to get the last word
    printf("%d", amount_words+1);


}

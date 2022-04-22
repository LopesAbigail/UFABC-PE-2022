#include<stdio.h>
#include<stdlib.h>

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   int data;
   LinkedNode *next;
};

/*
   A função deve devolver um ponteiro ao primeiro elemento da lista invertida
*/

LinkedNode* inverter_lista(LinkedNode *inicio) {

    LinkedNode* prev = NULL;
    LinkedNode* next = NULL;

    while(inicio != NULL) {
        next = inicio->next;

        inicio->next = prev;

        prev = inicio;
        inicio = next;
    }

    inicio = prev;

}

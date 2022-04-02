// Não declare vetor com colchetes
// Use malloc para alocar o vetor (e lembre-se de usar free para liberar a memória alocada com malloc)
#include<stdio.h>
#include<stdlib.h>

// Inserir ordenado
void insertionSort(double *array, int size) {

    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;

        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
            --j;
        }

        array[j + 1] = key;
    }
}

// Imprimir um array
void printArray(double *v, int size) {

    for (int i = 0; i < size; i++) {
        printf("%.1f ", v[i]);
    }

    printf("\n");
}

// tipo int para indicar o status da ocorrencia do programa principal
int main() {

    int len_array;
    scanf("%d", &len_array);

    double *array = malloc(sizeof(double) * len_array);
    int num, i, j, step = 0;

    while(num != -1) {

        // Ler entrada
        scanf("%d", &num);

        // Preparar o vetor geral
        array[step] = num;

        // Preparar vetor ordenado
        double *sortedArray = malloc(sizeof(double) * step);
        for(i = 0; i < step; i++) {
            sortedArray[i] = array[i];
        }

        insertionSort(sortedArray, step);
        printArray(sortedArray, step);

        step++;

        free(sortedArray);
    }

    free(array);

    return 0;

}


/* WITH STRUCT
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void sortedInsert(struct Node** head_ref,
                  struct Node* new_node)
{
    struct Node* current;

    if (*head_ref == NULL
        || (*head_ref)->data
               >= new_node->data) {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else {
        current = *head_ref;
        while (current->next != NULL
               && current->next->data < new_node->data) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

struct Node* newNode(int new_data)
{
    struct Node* new_node = (struct Node*)malloc(
        sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = NULL;

    return new_node;
}

void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* new_node = newNode(5);
    sortedInsert(&head, new_node);
    new_node = newNode(10);
    sortedInsert(&head, new_node);
    new_node = newNode(7);
    sortedInsert(&head, new_node);
    new_node = newNode(3);
    sortedInsert(&head, new_node);
    new_node = newNode(1);
    sortedInsert(&head, new_node);
    new_node = newNode(9);
    sortedInsert(&head, new_node);
    printf("\n Created Linked List\n");
    printList(head);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for an atomic element
typedef struct Element {
    char name[20];
    char symbol[3];
    float atomic_weight;
    struct Element *next;
} Element;

// Function to create a new element node
Element* createElement(char name[], char symbol[], float atomic_weight) {
    Element *newElement = (Element*)malloc(sizeof(Element));
    strcpy(newElement->name, name);
    strcpy(newElement->symbol, symbol);
    newElement->atomic_weight = atomic_weight;
    newElement->next = NULL;
    return newElement;
}

// Function to append an element to the linked list
void appendElement(Element **head_ref, char name[], char symbol[], float atomic_weight) {
    Element *newElement = createElement(name, symbol, atomic_weight);
    if (*head_ref == NULL) {
        *head_ref = newElement;
        return;
    }
    Element *last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newElement;
}

// Function to print the elements in the linked list
void printElements(Element *node) {
    while (node != NULL) {
        printf("Name: %s, Symbol: %s, Atomic Weight: %.3f\n", node->name, node->symbol, node->atomic_weight);
        node = node->next;
    }
}

int main() {
    Element *head = NULL;
    char name[20];
    char symbol[3];
    float atomic_weight;
    int i;

    printf("Enter the first ten elements of the periodic table:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter symbol: ");
        scanf("%s", symbol);
        printf("Enter atomic weight: ");
        scanf("%f", &atomic_weight);
        appendElement(&head, name, symbol, atomic_weight);
    }

    printf("\nFirst ten elements in the periodic table:\n");
    printElements(head);

    // Free the allocated memory
    Element *current = head;
    Element *next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}

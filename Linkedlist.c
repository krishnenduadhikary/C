//8. Write a program to create a singly linked list and insert a node at first position.
#include <stdio.h>
#include <stdlib.h>

// Define a Node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a node at the first position in a linked list
struct Node* insertFirst(struct Node *head, int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

// Function to print the linked list
void printList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    // Initialize an empty linked list
    struct Node *head = NULL;

    // Insert nodes at the first position
    head = insertFirst(head, 3);
    head = insertFirst(head, 7);
    head = insertFirst(head, 10);

    // Print the linked list
    printf("Linked List after inserting nodes at the first position: ");
    printList(head);

    return 0;
}


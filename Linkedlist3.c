//10. Write a program to create a singly linked list and insert a node at last position.
#include <stdio.h>
#include <stdlib.h>

// Define a Node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a node at the end of the linked list
struct Node* insertEnd(struct Node *head, int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode; // If the list is empty, new node becomes the head
    }

    struct Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    return head;
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

    // Insert nodes at the end of the linked list
    head = insertEnd(head, 3);
    head = insertEnd(head, 7);
    head = insertEnd(head, 10);

    // Print the linked list
    printf("Linked List after inserting nodes at the last position: ");
    printList(head);

    return 0;
}


//12. Write a program to implement a singly linked list and delete first node
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

// Function to delete the first node in the linked list
struct Node* deleteFirst(struct Node *head) {
    if (head == NULL) {
        // If the list is empty, nothing to delete
        return NULL;
    }

    struct Node *temp = head;
    head = head->next;
    free(temp); // Free the first node

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

    // Print the linked list before deletion
    printf("Linked List before deleting the first node: ");
    printList(head);

    // Delete the first node
    head = deleteFirst(head);

    // Print the linked list after deletion
    printf("Linked List after deleting the first node: ");
    printList(head);

    return 0;
}


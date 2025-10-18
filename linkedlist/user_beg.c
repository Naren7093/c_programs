#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to add a node at the end
struct Node* add_at_end(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;  // first node
    } else {
        struct Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }

    return head;
}

// Function to add a node at the beginning
struct Node* add_at_beginning(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

// Function to print the linked list
void print_list(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n, value;

    // Step 1: User adds initial elements ()
    printf("How many elements do you want to add initially? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);
        head = add_at_end(head, value);  // add at end to preserve order
    }

    printf("Linked List after initial insertion:\n");
    print_list(head);

    // Step 2: Add element at beginning ()
    printf("Enter element to add at the beginning: ");
    scanf("%d", &value);
    head = add_at_beginning(head, value);

    printf("Updated Linked List:\n");
    print_list(head);

    return 0;
}


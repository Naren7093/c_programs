#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to add node at the end (unchanged)
struct Node* add_at_end(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;  // if list is empty
    }

    struct Node* temp = head;
    while (temp->next != NULL) {  // move to last node
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

int main() {
    struct Node* head = NULL;
    int n, value;

    printf("How many nodes do you want to add? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        head = add_at_end(head, value);  // use function
    }

    // Printing directly in main
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node
{
    char data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(char data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%c -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to insert a node after a given node
void insertAfter(struct Node *prevNode, char data)
{
    if (prevNode == NULL)
    {
        printf("Previous node cannot be NULL\n");
        return;
    }
    struct Node *newNode = createNode(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Function to insert a node at the beginning
struct Node *insertAtBeginning(struct Node *head, char data)
{
    struct Node *newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

// Function to delete the last node
struct Node *deleteLastNode(struct Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }

    struct Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    return head;
}

int main()
{
    // Step 1: Create a linked list with a -> b -> c
    struct Node *head = createNode('a');
    head->next = createNode('b');
    head->next->next = createNode('c');

    printf("Initial Linked List: ");
    printList(head);

    // Step 2: Insert 'm' between 'b' and 'c'
    insertAfter(head->next, 'm');
    printf("After inserting 'm' between 'b' and 'c': ");
    printList(head);

    // Step 3: Insert 'd' before 'a'
    head = insertAtBeginning(head, 'd');
    printf("After inserting 'd' before 'a': ");
    printList(head);

    // Step 4: Delete the last element ('c')
    head = deleteLastNode(head);
    printf("After deleting the last element ('c'): ");
    printList(head);

    return 0;
}

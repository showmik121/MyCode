#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int x)
    {
        value = x;
        next = NULL;
    }
};
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void insertATend(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deletAtanative(Node *&head)
{

    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        Node *delet = temp->next;
        temp->next = temp->next->next;
        temp = temp->next; // temp->next is the address of the next node in the list.
        // Assigning temp = temp->next makes temp point to the next node.
        free(delet);
    }
}
int main()
{
    Node *head = NULL;
    insertATend(head, 1);
    insertATend(head, 2);
    insertATend(head, 3);
    insertATend(head, 4);
    insertATend(head, 5);
    traverse(head);
    deletAtanative(head);
    traverse(head);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int v)
    {
        value = v;
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

void insertAThead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insertATEnd(Node *&head, int val)
{
    if (head == NULL)
    {
        insertAThead(head, val);
        return;
    }

    Node *newNode = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertATMId(Node *&head, int val, int pos)
{
    if (pos == 1)
    {
        insertAThead(head, val);
        return;
    }

    Node *newNode = new Node(val);
    Node *pre = head;
    int count = 1;
    while (count < (pos - 1))
    {
        pre = pre->next;
        count++;
    }
    newNode->next = pre->next; // This means the new node now points to the node that originally came after pre.
    pre->next = newNode;       // The pre->next is updated to point to the newNode. This inserts the newNode into the list between pre and pre->next.
}
void deletAThead(Node *&head)
{
    if (head == NULL)
    {
        return;
    }

    Node *temp = head;
    head = head->next;
    free(temp);
}
void deletATend(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deletAThead(head);
        return;
    }

    Node *secondlast = head;
    while (secondlast->next->next != NULL)
    {
        secondlast = secondlast->next;
    }
    Node *lastnode = secondlast->next;
    secondlast->next = NULL;
    free(lastnode);
}
void deletATmid(Node *&head, int pos)
{
    if (pos == 1)
    {
        deletAThead(head);
    }

    Node *pre = head;
    int count = 1;
    while (count < (pos - 1))
    {
        pre = head->next;
        count++;
    }
    Node *current = pre->next;
    pre->next = current->next;
    free(current);
}
void updatevalue(Node *&head, int val, int pos)
{
    Node *temp = head;
    int count = 1;
    while (count < pos)
    {
        temp = temp->next;
        count++;
    }
    temp->value = val;
}
int main()
{
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    node1->next = node2;
    Node *head = node1;
    traverse(head);
    insertAThead(head, 3);
    traverse(head);
    insertATEnd(head, 4);
    traverse(head);
    insertATMId(head, 5, 3);
    traverse(head);
    deletAThead(head);
    traverse(head);
    deletATend(head);
    traverse(head);
    deletATmid(head, 2);
    traverse(head);
    updatevalue(head, 4, 2);
    traverse(head);
    return 0;
}
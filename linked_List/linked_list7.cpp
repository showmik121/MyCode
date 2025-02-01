#include <bits/stdc++.h>
using namespace std;

// move k element in roted linked list
class Node
{
public:
    int value;
    Node *next;
    Node(int val)
    {
        value = val;
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
void insertEnd(Node *&head, int val)
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
void roted_BY_K(Node *&head, int k)
{
    Node *temp = head;
    int n = 1;
    while (temp->next != NULL)
    {
        n++;
        temp = temp->next;
    }
    // temp is the last node

    k = k % n;
    if (k == 0)
    {
        return;
    }
    // 1.last node point to head
    temp->next = head; // make it circular
    // 2.find (n-k) th node and make node as new head
    temp = head;
    for (int i = 1; i < (n - k); i++)
    {
        temp = temp->next;
    }
    Node *newNode = temp->next; //(n-k+1)th node
    // 3. make n-k th node point to NULL
    temp->next = NULL;
    head = newNode;
}
int main()
{
    Node *head = NULL;
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 3);
    insertEnd(head, 4);
    insertEnd(head, 5);
    traverse(head);
    int k;
    cin >> k;
    roted_BY_K(head, k);
    traverse(head);
    return 0;
}
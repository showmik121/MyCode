#include <bits/stdc++.h>
using namespace std;
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
void traversel(Node *head)
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
bool checkEqual(Node *head1, Node *head2)
{
    while (head1 && head2)
    {
        if (head1->value != head2->value)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1 == NULL && head2 == NULL;
}
int main()
{
    Node *head1 = NULL;
    insertEnd(head1, 1);
    insertEnd(head1, 2);
    insertEnd(head1, 3);
    insertEnd(head1, 4);
    insertEnd(head1, 5);
    traversel(head1);
    Node *head2 = NULL;
    insertEnd(head2, 1);
    insertEnd(head2, 2);
    insertEnd(head2, 3);
    insertEnd(head2, 6);
    insertEnd(head2, 5);
    traversel(head2);
    cout << (checkEqual(head1, head2) ? "yes" : "no") << endl;
    return 0;
}
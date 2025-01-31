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
bool ckeckPalindom(Node *&head)
{
    if (head==NULL|| head->next == NULL)
    {
        return true;
    }
    // find the middle
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // reverse second part
    Node *curr = slow;
    Node *pre = NULL;
    Node *nex;
    while (curr)
    {
        nex = curr->next;
        curr->next = pre;
        pre = curr;
        curr = nex;
    }
    // compare the two part
    Node *head2 = pre;
    while (head2)
    {
        if (head->value != head2->value)
        {
            return false;
        }
        head = head->next;
        head2 = head2->next;
    }
    return true;
}

int main()
{
    Node *head = NULL;
    insertEnd(head, 1);
    insertEnd(head, 3);
    insertEnd(head, 3);
    insertEnd(head, 3);
    insertEnd(head, 1);
    traversel(head);
    cout << (ckeckPalindom(head) ? "yes" : "no") << endl;
    return 0;
}
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node *reverseKNode(node *head, int k)
{
    node *prevPtr = NULL;
    node *curPtr = head;
    node *nextPtr;
    int count = 0;
    while (curPtr != NULL && count < k)
    {
        nextPtr = curPtr->next;
        curPtr->next = prevPtr;
        prevPtr = curPtr;
        curPtr = nextPtr;
        count++;
    }
    if (nextPtr != NULL)
    {
        head->next = reverseKNode(nextPtr, k);
    }
    return prevPtr;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    int k = 2;
    node *newHead = reverseKNode(head, k);
    display(newHead);
    return 0;
}
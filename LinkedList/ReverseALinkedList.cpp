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

node *iterReverseLL(node *&head)
{
    node *prevPtr = NULL;
    node *curPtr = head;
    node *nextPtr;

    while (curPtr != NULL)
    {
        nextPtr = curPtr->next;
        curPtr->next = prevPtr;
        prevPtr = curPtr;
        curPtr = nextPtr;
    }
    return prevPtr;
}

node *recReverseLL(node *&head) // O(n)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newHead = recReverseLL(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    // node *newHead = iterReverseLL(head);
    node *newHead = recReverseLL(head);
    display(newHead);
    return 0;
}
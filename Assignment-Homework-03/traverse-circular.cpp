#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void insertEnd(Node*& head, int x)
{
    Node* node = new Node(x);

    if(head == NULL) {
        head = node;
        node->next = head;
        return;
    }

    Node* temp = head;

    while(temp->next != head) {
        temp = temp->next;
    }

    temp->next = node;
    node->next = head;
}

void print(Node* head)
{
    if(head == NULL)
        return;

    Node* temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != head);
}
int main()
{

    return 0;
}
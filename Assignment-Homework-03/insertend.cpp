#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
    public:
    Node* head;

    DoublyLinkedList() {
        head = NULL;
    }

    void insertend(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;

        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;

    }
};
int main (){

    return 0;
}
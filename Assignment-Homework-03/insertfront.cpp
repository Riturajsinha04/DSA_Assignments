#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node( int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
    public:
      Node* head;

    DoublyLinkedList(){
        head = NULL;
    }

    void insertfront(int val) {
        Node* newNode = new Node(val);

        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next= head;
        head->prev = newNode;
        head = newNode;
    }

};

int main(){
    DoublyLinkedList dll;

    return 0;
}
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

};

int main(){
    DoublyLinkedList dll;
    cout << " ";
    return 0;
    


}
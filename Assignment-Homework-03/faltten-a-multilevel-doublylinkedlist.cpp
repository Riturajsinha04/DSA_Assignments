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
class Solution {
public:
    Node* flatten(Node* head, ) {
        if (head == NULL) {
            return head;
        }
        Node* curr = head;

        while (curr) {
            Node* next = curr->next;

            if (curr->child) {
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;

                while (curr->next) {
                    curr = curr->next;
                }
                if (next) {
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};
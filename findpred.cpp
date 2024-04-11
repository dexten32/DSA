#include <iostream>
using namespace std;

//Harsh Bajaj
//21/4002

class node {
    public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};


node* findPredecessor(node* head, int target) {
    if(head==NULL) {
        return nullptr;
    } else if (head->data==target){
        return nullptr;
    } else {
        node* temp = head;
        while(temp -> next -> data!=target && temp -> next!=NULL){
            temp = temp -> next;
        }

        if (temp -> next!=NULL) {
            return temp
        } else {
            return nullptr;
        }
    }
}


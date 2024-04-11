#include <iostream> 
#include <stack>
using namespace std;

//Harsh Bajaj
//21/4002

class node {
    public:
    int data;
    node* next;
    node* prev;
    node(int val) {
        data=val;
        next=prev=NULL;
    }
};

void swapOddEven(node* head) {
    node* temp = head;
    while(temp -> next !=NULL) {
        if (temp -> data%2==0 && temp -> next -> data%2 == 1) {
            int e = temp-> data;
            temp -> data = temp -> next -> data;
            temp -> next -> data = e;
        }
        temp = temp -> next;
    }
}
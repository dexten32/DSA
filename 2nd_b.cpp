#include <iostream>
using namespace std;
#include<stack>
#include<list>
//Harsh Bajaj
//21/4002

class node{
    public:
    int data;
    node* next;
    node(int a, node* n=0){
        data=a;
        next=n;
    }
    node(){
        next=0;
    }
};

stack<int> mul(stack<int> &s){
    stack<int> res;
    int c=0;
    while(!s.empty() || c!=0){
        int dig=s.top()*3 +c;
        s.pop();

        c=dig/10;
        dig%=10;
        res.push(dig);
    }
    return res;
}


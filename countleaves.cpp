#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val) {
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

int countLeaves(node* root) {
    if (root==nullptr){
        return 0;
    } else if(root->left==nullptr && root->right==nullptr){
        return 1;
    } else {
        int lcount = countLeaves(root->left);
        int rcount = countLeaves(root->right);
        return lcount+rcount;
    }
};
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct TreeNode {
    char data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    TreeNode* buildTree(vector<char>& inorder, vector<char>& postorder) {
        for (int i = 0; i < inorder.size(); ++i) {
            inorderIndex[inorder[i]] = i;
        }
        int postIndex = postorder.size() - 1;  
        return buildTreeHelper(inorder, postorder, 0, inorder.size() - 1, postIndex);
    }

    void preorderTraversal(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }

private:
    unordered_map<char, int> inorderIndex;

    TreeNode* buildTreeHelper(vector<char>& inorder, vector<char>& postorder, int inStart, int inEnd, int& postIndex) {
        if (inStart > inEnd) {
            return nullptr;
        }

        char rootValue = postorder[postIndex];
        TreeNode* root = new TreeNode(rootValue);
        postIndex--;
        int inIndex = inorderIndex[rootValue];
        root->right = buildTreeHelper(inorder, postorder, inIndex + 1, inEnd, postIndex);
        root->left = buildTreeHelper(inorder, postorder, inStart, inIndex - 1, postIndex);

        return root;
    }
};

int main() {
    vector<char> inorder = {'A', 'B', 'C', 'D', 'F', 'G', 'K', 'L', 'N', 'P', 'T'};
    vector<char> postorder = {'B', 'C', 'A', 'P', 'N', 'T', 'L', 'K', 'G', 'F', 'D'};

    BinaryTree tree;
    TreeNode* root = tree.buildTree(inorder, postorder);

    cout << "Preorder Traversal: ";
    tree.preorderTraversal(root);
    cout << endl;

    return 0;
}

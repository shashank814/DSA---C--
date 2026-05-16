#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Node {
    public:
    int data; 
    Node* left; 
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* helper(vector<int> &preorder, int &i, int bound) {
    if(i >= preorder.size() || preorder[i] > bound) {
        return NULL;
    }

    Node* root = new Node(preorder[i++]);
    root->left = helper(preorder, i, root->data);
    root->right = helper(preorder, i, bound);

    return root;
}

Node* bstFromPreorder(vector<int> &preorder) {
    int i = 0;
    return helper(preorder, i, INT_MAX);
}

void preOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    vector<int> preorder = {6,2,0,4,3,5,7,8,9};
    Node* root = bstFromPreorder(preorder);

    preOrder(root);

    return 0;
}
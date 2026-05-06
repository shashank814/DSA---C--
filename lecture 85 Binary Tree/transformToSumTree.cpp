#include<iostream>
#include <vector>
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

// builds tree
static int idx = -1;
Node* buildTree(vector<int> &preorder) {
    idx++;

    if(preorder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);    // LEFT
    root->right = buildTree(preorder);

    return root;
}

void preOrder(Node* root) {
    if(root == NULL) return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// calculates count of tree
int sum(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftSum = sum(root->left);
    int rightSum = sum(root->right);
    root->data += leftSum + rightSum;

    return root->data;
}

void print(Node* root) {
    if(root == NULL) return;

    cout << root->data << " ";
    print(root->left);
    print(root->right);
}

int main() {
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);

    // Preorder
    cout << "Preorder : ";
    preOrder(root);

    sum(root);

    cout << "\nTransform : ";
    print(root);
    return 0;
}
#include<iostream>
#include<vector>
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

bool helper(Node* root, Node* min, Node* max) {
    if(root == NULL) {
        return true;
    }

    // min < node < max
    if(min != NULL && root->data <= min->data) {
        return false;
    }
    if(max != NULL && root->data >= max->data) {
        return false;
    }

    return helper(root->left, min, root)
           && helper(root->right, root, max);
}

bool isValidBST(Node* root) {
    return helper(root, NULL, NULL);
}

int main() {
    Node* root = new Node(0);
    root->left = new Node(-3);
    root->right = new Node(5);
    root->right->left = new Node(4);
    root->right->right = new Node(6);

    if(isValidBST(root)) {
        cout << "Valid BST";
    } else {
        cout << "Invalid BST";
    }

    return 0;
}

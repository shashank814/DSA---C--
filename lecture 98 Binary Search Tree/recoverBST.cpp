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

Node* insert(Node* root, int val) {
    if(root == NULL) {
        return new Node(val);
    }

    if(val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

Node* buildBST(vector<int> arr) {
    Node* root = NULL;

    for(int val : arr) {
        root = insert(root, val);
    }

    return root;
}

// global pointers
Node* prevNode = NULL;
Node* first = NULL;
Node* sec = NULL;

void inorder(Node* root) {
    if(root == NULL) return;

    inorder(root->left);

    if(prevNode != NULL && prevNode->data > root->data) {
        if(first == NULL) {
            first = prevNode;
        }
        sec = root;
    }

    prevNode = root;

    inorder(root->right);
}

// helper to print
void printInorder(Node* root) {
    if(!root) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main() {
    vector<int> arr = {8,2,1,10};
    Node* root = buildBST(arr);

    root->left->data = 9;

    cout << "Before fix: ";
    printInorder(root);
    cout << endl;

    prevNode = first = sec = NULL;
    inorder(root);

    if(first && sec) {
        swap(first->data, sec->data);
    }

    cout << "After fix: ";
    printInorder(root);
    cout << endl;

    return 0;
}
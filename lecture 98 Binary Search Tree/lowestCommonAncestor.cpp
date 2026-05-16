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

Node* BST(vector<int> arr) {
    Node* root = NULL;

    for(int val : arr) {
        root = insert(root, val);
    }

    return root;
}

Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    if(root == NULL) {
        return NULL;
    }

    if(root->data > p->data && root->data > q->data) {
        return lowestCommonAncestor(root->left, p, q);
    } else if(root->data < p->data && root->data < q->data) {
        return lowestCommonAncestor(root->right, p, q);
    } else {
        return root;
    }
}

int main() {
    vector<int> arr = {6,2,0,4,3,5,7,8,9};
    Node* root = BST(arr);

    Node* p = new Node(0);
    Node* q = new Node(4);

    Node* lca = lowestCommonAncestor(root, p, q);
    cout << lca->data << endl;

    return 0;
}
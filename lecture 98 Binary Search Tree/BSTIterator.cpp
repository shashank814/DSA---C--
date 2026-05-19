#include<iostream>
#include<vector>
#include<stack>
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

// Iterator Class
class BSTIterator {
private:
    stack<Node*> s;

    void storeLeftNodes(Node* root) {
        while(root != NULL) {
            s.push(root);
            root = root->left;
        }
    }

public:
    BSTIterator(Node* root) {
        storeLeftNodes(root);
    }

    bool hasNext() {
        return !s.empty();
    }

    int next() {
        Node* temp = s.top();
        s.pop();

        if(temp->right != NULL) {
            storeLeftNodes(temp->right);
        }

        return temp->data;
    }
};

int main() {
    vector<int> arr = {7,3,2,15,9,20};
    Node* root = BST(arr);

    BSTIterator it(root);

    while(it.hasNext()) {
        cout << it.next() << " ";
    }

    return 0;
}
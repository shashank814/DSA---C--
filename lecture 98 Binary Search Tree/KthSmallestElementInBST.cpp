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

int prevOrder;
int kthSmallest(Node* root, int k) {
    if(root == NULL) {
        return -1;
    }

    if(root->left != NULL) {
        int leftAns = kthSmallest(root->left, k);
        if(leftAns != -1) {
            return leftAns;
        }
    }

    if(prevOrder + 1 == k) {
        return root->data;
    }
    prevOrder = prevOrder + 1;

    if(root->right != NULL) {
        int rightAns = kthSmallest(root->right, k);
        if(rightAns != -1) {
            return rightAns;
        }
    }

    return -1;
}

void inorder(Node* root) {
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    vector<int> arr = {1,2,3,4,5,6};
    Node* root = BST(arr);

    prevOrder = 0;

    int result = kthSmallest(root, 4);
    cout << result << endl;

    return 0;
}
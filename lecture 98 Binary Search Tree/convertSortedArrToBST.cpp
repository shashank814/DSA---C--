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

Node* helper(vector<int> arr, int st, int end) {
    if(st > end) {
        return NULL;
    }
    int mid = st + (end-st)/2;

    Node* root = new Node(arr[mid]);
    root->left = helper(arr, st, mid-1);
    root->right = helper(arr, mid+1, end);

    return root;
}

Node* sortedArrayToBST(vector<int> &arr) {
    return helper(arr, 0, arr.size()-1);
}

void print(Node* root) {
    if(root == NULL) return;

    print(root->left);
    cout << root->data << " ";
    print(root->right);
}

int main() {
    vector<int> arr = {-10,-3,0,5,9};
    Node* root = sortedArrayToBST(arr);

    print(root);

    return 0;
}


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

int solve(Node* root, Node*& prev) {
    if(root == NULL) return INT_MAX;

    int ans = INT_MAX;

    ans = min(ans, solve(root->left, prev));

    if(prev != NULL) {
        ans = min(ans, root->data - prev->data);
    }

    prev = root;

    ans = min(ans, solve(root->right, prev));

    return ans;
}

int minDiffInBST(Node* root) {
    Node* prev = NULL;
    return solve(root, prev);
}

void inorder(Node* root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    vector<int> arr = {42, 52, 62, 82, 83, 88};

    // Build BST
    Node* root = BST(arr);

    // Find minimum difference
    int result = minDiffInBST(root);

    cout << "Minimum Difference: " << result << endl;

    // Print inorder traversal (should be sorted)
    inorder(root);
    cout << endl;

    return 0;
}
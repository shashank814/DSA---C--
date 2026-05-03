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

Node* buildTree(vector<int> &arr, int &idx) {
    idx++;

    if(arr[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(arr[idx]);
    root->left = buildTree(arr, idx);
    root->right = buildTree(arr, idx);

    return root;
}

bool isSameTree(Node* p, Node* q) {
    if(p == NULL || q == NULL) {
        return p == q;
    }

    bool isLeftSame = isSameTree(p->left, q->left);
    bool isRightSame = isSameTree(p->right, q->right);

    return isLeftSame && isRightSame && p->data == q->data;
}

bool isSubTree(Node* root, Node* subRoot) {
    if(root == NULL || subRoot == NULL) {
        return root == subRoot;
    }

    if(root->data == subRoot->data && isSameTree(root, subRoot)) {
        return true;
    }

    return isSubTree(root->left, subRoot) || isSubTree(root->right, subRoot);
}

int main() {
    vector<int> p = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    vector<int> q = {3,4,-1,-1,5,-1,-1};

    int idx1 = -1;
    int idx2 = -1;

    Node* root1 = buildTree(p, idx1);
    Node* root2 = buildTree(q, idx2);

    if(isSubTree(root1, root2)) {
        cout << "Subtree Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
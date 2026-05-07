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

static int idx = -1;
Node* buildTree(vector<int> preorder) {
    idx++;

    if(preorder[idx] == -1) {
        return 0;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

void KthLevel(Node* root, int k) {
    if(root == NULL) {
        return;
    }

    if(k == 1) {
        cout << root->data << " ";
        return;
    }

    KthLevel(root->left, k-1);
    KthLevel(root->right, k-1);
}

int main() {
    vector<int> preorder = {1,2,3,-1,-1,-1,4,5,-1,-1,6,-1,-1};
    Node* root = buildTree(preorder);

    KthLevel(root, 3);

    return 0;
}
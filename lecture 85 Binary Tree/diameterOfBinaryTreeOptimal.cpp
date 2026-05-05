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
Node* buildTree(vector<int> v) {
    idx++;

    if(v[idx] == -1) {
        return 0;
    }

    Node* root = new Node(v[idx]);
    root->left = buildTree(v);
    root->right = buildTree(v);

    return root;
}

int ans = 0;
int height(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    ans = max(ans, leftHt + rightHt);
    return max(leftHt, rightHt) + 1;
}

int diameterOfBinaryTree(Node* root) {
    height(root);

    return ans;
}

int main() {
    vector<int> v = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(v);

    cout << diameterOfBinaryTree(root);

    return 0;
}
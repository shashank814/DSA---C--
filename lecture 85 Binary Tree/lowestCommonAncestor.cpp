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

// global index
static int idx = -1;

// Build tree from preorder
Node* buildTree(vector<int> &preorder) {
    idx++;

    if(preorder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// Find node by value
Node* findNode(Node* root, int val) {
    if(root == NULL) return NULL;

    if(root->data == val) return root;

    Node* left = findNode(root->left, val);
    if(left != NULL) return left;

    return findNode(root->right, val);
}

// LCA function
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    if(root == NULL) return NULL;

    if(root == p || root == q) {
        return root;
    }

    Node* leftLCA = lowestCommonAncestor(root->left, p, q);
    Node* rightLCA = lowestCommonAncestor(root->right, p, q);

    if(leftLCA && rightLCA) {
        return root;
    }

    return (leftLCA != NULL) ? leftLCA : rightLCA;
}

int main() {
    vector<int> preorder = {3,5,6,-1,-1,2,7,-1,-1,4,-1,-1,1,0,-1,-1,8,-1,-1};
    
    Node* root = buildTree(preorder);

    int val1 = 4;
    int val2 = 6;

    Node* p = findNode(root, val1);
    Node* q = findNode(root, val2);

    // safety check
    if(p == NULL || q == NULL) {
        cout << "One or both nodes not found";
        return 0;
    }

    Node* ans = lowestCommonAncestor(root, p, q);

    if(ans != NULL) {
        cout << "LCA: " << ans->data;
    }

    return 0;
}
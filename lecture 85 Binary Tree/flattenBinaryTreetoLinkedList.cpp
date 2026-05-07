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

Node* nextRight = NULL;
void flatten(Node* root) {
    if(root == NULL) {
        return;
    }

    flatten(root->right);
    flatten(root->left);

    root->left = NULL;
    root->right = nextRight;
    nextRight = root;
}

void print(Node* root) {
    if(root == NULL) return;

    cout << root->data << "->";
    print(root->left);
    print(root->right);
}

int main() {
    vector<int> preorder = {1,2,3,-1,-1,4,-1,-1,5,-1,6,-1,-1};
    Node* root = buildTree(preorder);

    flatten(root);

    cout << "Flatten : " << endl;
    print(root);

    return 0;
}
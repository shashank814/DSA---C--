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
Node* buildTree(vector<int> p) {
    idx++;

    if(p[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(p[idx]);
    root->left = buildTree(p);
    root->right = buildTree(p);

    return root;
}

vector<int> inorderTraversal(Node* root) {
    vector<int> ans;
    Node* curr = root;

    while(curr != NULL) {
        if(curr->left == NULL) {
            ans.push_back(curr->data);
            curr = curr->right;
        } else {
            Node* IP = curr->left;
            while(IP->right != NULL && IP->right != curr) {
                IP = IP->right;
            }

            if(IP->right == NULL) {
                IP->right = curr;    // create thread
                curr = curr->left;
            } else {
                IP->right = NULL;    // delete thread
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> p = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(p);

    vector<int> ans = inorderTraversal(root);
    for(auto val : ans) {
        cout << val << " ";
    }

    return 0;
}
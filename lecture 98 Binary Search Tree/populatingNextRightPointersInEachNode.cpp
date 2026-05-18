#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node {
    public:
    int data;
    Node* left; 
    Node* right;
    Node* next;

    Node(int val) {
        data = val;
        left = right = next = NULL;
    }
};

Node* connect(Node* root) {
    if(root == NULL || root->left == NULL) {
        return root;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);      // mark the end of the level

    Node* prev = NULL;

    while(q.size() > 0) {
        Node* curr = q.front();
        q.pop();

        if(curr == NULL) {
            prev = NULL;

            if(q.size() == 0) {
                break;
            }

            q.push(NULL);

        } else {
            if(curr->left != NULL) {
                q.push(curr->left);
            }

            if(curr->right != NULL) {
                q.push(curr->right);
            }

            if(prev != NULL) {
                prev->next = curr;
            }
        }

        prev = curr;
    }

    return root;
}

// void printNode(Node* root) {
//     if(root == NULL) {
//         return;
//     }

//     cout << root->data << " ";
//     printNode(root->left);
//     printNode(root->right);
// }

void printUsingNext(Node* root) {
    while(root != NULL) {
        Node* curr = root;

        while(curr != NULL) {
            cout << curr->data << " -> ";
            curr = curr->next;
        }

        cout << "NULL" << endl;

        root = root->left; // move to next level
    }
}

int main() {
    Node* root = new Node(1);
    root->right = new Node(3);
    root->left = new Node(2);
    root->left->right = new Node(5);
    root->left->left = new Node(4);
    root->right->right = new Node(7);
    root->right->left = new Node(6);

    connect(root);

    printUsingNext(root);

    return 0;
}

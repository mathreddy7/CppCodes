#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    int height;   
    Node* left;
    Node* right;

    Node(int val) {
        data   = val;
        height = 1;  
        left   = nullptr;
        right  = nullptr;
    }
};

class AVLTree {
private:
    Node* root;

    int getHeight(Node* node) {
        return node ? node->height : 0;
    }

    int getBalanceFactor(Node* node) {
        return node ? getHeight(node->left) - getHeight(node->right) : 0;
    }

    void updateHeight(Node* node) {
        if (node)
            node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    }

    Node* rotateRight(Node* y) {
        Node* x  = y->left;
        Node* T2 = x->right;

        x->right = y;  
        y->left  = T2;  

        updateHeight(y); 
        updateHeight(x);

        return x;     
    }

    Node* rotateLeft(Node* x) {
        Node* y  = x->right;
        Node* T2 = y->left;

        y->left  = x; 
        x->right = T2;  

        updateHeight(x);
        updateHeight(y);

        return y;   
    }

    Node* insert(Node* node, int val) {
        if (!node) return new Node(val);

        if      (val < node->data) node->left  = insert(node->left,  val);
        else if (val > node->data) node->right = insert(node->right, val);
        else return node; 

        updateHeight(node);

        int bf = getBalanceFactor(node);

        if (bf > 1 && val < node->left->data) {
            cout << "LL Rotation at node " << node->data << "\n";
            return rotateRight(node);
        }

        if (bf < -1 && val > node->right->data) {
            cout << "RR Rotation at node " << node->data << "\n";
            return rotateLeft(node);
        }

        if (bf > 1 && val > node->left->data) {
            cout << "LR Rotation at node " << node->data << "\n";
            node->left = rotateLeft(node->left);
            return rotateRight(node);        
        }

        if (bf < -1 && val < node->right->data) {
            cout << "RL Rotation at node " << node->data << "\n";
            node->right = rotateRight(node->right); 
            return rotateLeft(node);              
        }

        return node; 
    }

    void inorder(Node* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->data
             << " [h=" << node->height
             << ", bf=" << getBalanceFactor(node) << "]  ";
        inorder(node->right);
    }

public:
    AVLTree() {
        root = nullptr;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    void showInorder() {
        cout << "\nInorder (node [height, balance_factor]):\n";
        inorder(root);
        cout << "\n";
    }
};

int main() {
    AVLTree avl;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        avl.insert(val);
    }

    avl.showInorder();

    return 0;
}
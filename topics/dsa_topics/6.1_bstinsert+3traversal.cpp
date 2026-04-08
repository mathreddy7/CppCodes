#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data  = val;
        left  = nullptr;
        right = nullptr;
    }
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, int val) {
        if (!node) return new Node(val); 

        if      (val < node->data) node->left  = insert(node->left,  val);
        else if (val > node->data) node->right = insert(node->right, val);

        return node;
    }

    void inorder(Node* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void preorder(Node* node) {
        if (!node) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node* node) {
        if (!node) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

public:
    BST() {
        root = nullptr;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    void showInorder()   { cout << "Inorder   (sorted output) : "; inorder(root);   cout << "\n"; }
    void showPreorder()  { cout << "Preorder                  : "; preorder(root);  cout << "\n"; }
    void showPostorder() { cout << "Postorder                 : "; postorder(root); cout << "\n"; }
};

int main() {
    BST bst;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        bst.insert(val);
    }

    cout << "\n--- BST Traversals ---\n";
    bst.showInorder();
    bst.showPreorder();
    bst.showPostorder();

    return 0;
} 
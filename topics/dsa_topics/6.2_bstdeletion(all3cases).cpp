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

    Node* findMin(Node* node) {
        while (node->left)
            node = node->left;
        return node;
    }

    Node* deleteNode(Node* node, int val) {
        if (!node) {
            cout << "Value " << val << " not found in tree!\n";
            return nullptr;
        }

        if      (val < node->data) node->left  = deleteNode(node->left,  val);
        else if (val > node->data) node->right = deleteNode(node->right, val);
        else {

            if (!node->left && !node->right) {
                cout << "[Case 1] Deleting leaf node: " << val << "\n";
                delete node;
                return nullptr;
            }

            if (!node->left) {
                cout << "[Case 2] Node " << val << " has only a RIGHT child\n";
                Node* temp = node->right;
                delete node;
                return temp; 
            }

            if (!node->right) {
                cout << "[Case 2] Node " << val << " has only a LEFT child\n";
                Node* temp = node->left;
                delete node;
                return temp;
            }

            cout << "[Case 3] Node " << val << " has TWO children\n";
            Node* successor = findMin(node->right);
            cout << "         Replacing with inorder successor: " << successor->data << "\n";
            node->data  = successor->data;
            node->right = deleteNode(node->right, successor->data);
        }
        return node;
    }

    void inorder(Node* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

public:
    BST() {
        root = nullptr;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    void deleteNode(int val) {
        root = deleteNode(root, val);
    }

    void showInorder() {
        cout << "Inorder: ";
        inorder(root);
        cout << "\n";
    }
};

int main() {
    BST bst;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        bst.insert(val);
    }

    cout << "\nBefore deletion → ";
    bst.showInorder();

    int key;
    cout << "\nEnter value to delete: ";
    cin >> key;

    bst.deleteNode(key);

    cout << "After  deletion → ";
    bst.showInorder();

    return 0;
}
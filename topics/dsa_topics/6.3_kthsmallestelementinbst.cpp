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

    void kthSmallest(Node* node, int k, int& count, int& result) {
        if (!node || count >= k) return;

        kthSmallest(node->left, k, count, result); 

        count++;                                
        if (count == k) {
            result = node->data;             
            return;
        }

        kthSmallest(node->right, k, count, result); 
    }

public:
    BST() {
        root = nullptr;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    void findKthSmallest(int k) {
        int count  = 0;
        int result = -1;

        kthSmallest(root, k, count, result);

        if (result == -1)
            cout << "K (" << k << ") is larger than total number of nodes!\n";
        else
            cout << "The " << k << "th smallest element is: " << result << "\n";
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

    int k;
    cout << "Enter K: ";
    cin >> k;

    bst.findKthSmallest(k);

    return 0;
}
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

class BinaryTree {
private:
    Node* root;

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
    BinaryTree() {
        root = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);

        if (!root) {
            root = newNode;
            return;
        }

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();

            if (!curr->left) {
                curr->left = newNode; 
                return;
            } else {
                q.push(curr->left);
            }

            if (!curr->right) {
                curr->right = newNode; 
                return;
            } else {
                q.push(curr->right);
            }
        }
    }

    void showInorder()    { cout << "Inorder    (L → Root → R) : "; inorder(root);    cout << "\n"; }
    void showPreorder()   { cout << "Preorder   (Root → L → R) : "; preorder(root);   cout << "\n"; }
    void showPostorder()  { cout << "Postorder  (L → R → Root) : "; postorder(root);  cout << "\n"; }

    void showLevelOrder() {
        cout << "Level-Order (BFS)          : ";
        if (!root) return;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if (curr->left)  q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        cout << "\n";
    }
};

int main() {
    BinaryTree tree;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        tree.insert(val);
    }

    cout << "\n--- Tree Traversals ---\n";
    tree.showInorder();
    tree.showPreorder();
    tree.showPostorder();
    tree.showLevelOrder();

    return 0;
}
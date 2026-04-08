#include <iostream>

struct Node {
    int key, height;
    Node *left, *right;
    Node(int k) : key(k), height(1), left(nullptr), right(nullptr) {}
};

int h(Node* n) { return n ? n->height : 0; }
int b(Node* n) { return n ? h(n->left) - h(n->right) : 0; }

Node* rotR(Node* y) {
    Node* x = y->left;
    y->left = x->right;
    x->right = y;
    y->height = 1 + std::max(h(y->left), h(y->right));
    x->height = 1 + std::max(h(x->left), h(x->right));
    return x;
}

Node* rotL(Node* x) {
    Node* y = x->right;
    x->right = y->left;
    y->left = x;
    x->height = 1 + std::max(h(x->left), h(x->right));
    y->height = 1 + std::max(h(y->left), h(y->right));
    return y;
}

Node* insert(Node* node, int key) {
    if (!node) return new Node(key);
    if (key < node->key) node->left = insert(node->left, key);
    else if (key > node->key) node->right = insert(node->right, key);
    else return node;

    node->height = 1 + std::max(h(node->left), h(node->right));
    int bal = b(node);

    if (bal > 1 && key < node->left->key) return rotR(node);
    if (bal < -1 && key > node->right->key) return rotL(node);
    if (bal > 1 && key > node->left->key) {
        node->left = rotL(node->left);
        return rotR(node);
    }
    if (bal < -1 && key < node->right->key) {
        node->right = rotR(node->right);
        return rotL(node);
    }
    return node;
}

void print(Node* root) {
    if (root) {
        print(root->left);
        std::cout << root->key << " ";
        print(root->right);
    }
}

int main() {
    Node* root = nullptr;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    print(root);
    return 0;
}
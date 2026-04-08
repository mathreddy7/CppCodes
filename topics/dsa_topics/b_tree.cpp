#include <iostream>

class Node {
    int *keys, t, n;
    Node **C;
    bool leaf;
public:
    Node(int _t, bool _leaf) {
        t = _t; leaf = _leaf;
        keys = new int[2*t - 1];
        C = new Node *[2*t];
        n = 0;
    }
    void traverse() {
        int i;
        for (i = 0; i < n; i++) {
            if (!leaf) C[i]->traverse();
            std::cout << " " << keys[i];
        }
        if (!leaf) C[i]->traverse();
    }
    void insertNonFull(int k) {
        int i = n - 1;
        if (leaf) {
            while (i >= 0 && keys[i] > k) {
                keys[i + 1] = keys[i];
                i--;
            }
            keys[i + 1] = k;
            n = n + 1;
        } else {
            while (i >= 0 && keys[i] > k) i--;
            if (C[i + 1]->n == 2*t - 1) {
                splitChild(i + 1, C[i + 1]);
                if (keys[i + 1] < k) i++;
            }
            C[i + 1]->insertNonFull(k);
        }
    }
    void splitChild(int i, Node *y) {
        Node *z = new Node(y->t, y->leaf);
        z->n = t - 1;
        for (int j = 0; j < t - 1; j++) z->keys[j] = y->keys[j + t];
        if (!y->leaf) {
            for (int j = 0; j < t; j++) z->C[j] = y->C[j + t];
        }
        y->n = t - 1;
        for (int j = n; j >= i + 1; j--) C[j + 1] = C[j];
        C[i + 1] = z;
        for (int j = n - 1; j >= i; j--) keys[j + 1] = keys[j];
        keys[i] = y->keys[t - 1];
        n = n + 1;
    }
    friend class BTree;
};

class BTree {
    Node *root;
    int t;
public:
    BTree(int _t) { root = nullptr; t = _t; }
    void traverse() { if (root) root->traverse(); }
    void insert(int k) {
        if (!root) {
            root = new Node(t, true);
            root->keys[0] = k;
            root->n = 1;
        } else {
            if (root->n == 2*t - 1) {
                Node *s = new Node(t, false);
                s->C[0] = root;
                s->splitChild(0, root);
                int i = 0;
                if (s->keys[0] < k) i++;
                s->C[i]->insertNonFull(k);
                root = s;
            } else root->insertNonFull(k);
        }
    }
};

int main() {
    BTree t(3);
    int vals[] = {10, 20, 5, 6, 12, 30, 7, 17};
    for(int v : vals) t.insert(v);
    t.traverse();
    return 0;
}
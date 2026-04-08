#include <iostream>
#include <vector>
#include <algorithm>

struct Node {
    bool isLeaf;
    std::vector<int> keys;
    std::vector<Node*> children;
    Node* next;
    Node(bool leaf) : isLeaf(leaf), next(nullptr) {}
};

class BPlusTree {
    Node* root;
    int t;

    void splitChild(Node* parent, int i, Node* y) {
        Node* z = new Node(y->isLeaf);
        int mid = (2 * t - 1) / 2;
        
        if (y->isLeaf) {
            z->keys.assign(y->keys.begin() + mid, y->keys.end());
            y->keys.erase(y->keys.begin() + mid, y->keys.end());
            z->next = y->next;
            y->next = z;
        } else {
            z->keys.assign(y->keys.begin() + mid + 1, y->keys.end());
            z->children.assign(y->children.begin() + mid + 1, y->children.end());
            int midKey = y->keys[mid];
            y->keys.erase(y->keys.begin() + mid, y->keys.end());
            y->children.erase(y->children.begin() + mid + 1, y->children.children.end());
            parent->keys.insert(parent->keys.begin() + i, midKey);
        }

        if (y->isLeaf) parent->keys.insert(parent->keys.begin() + i, z->keys[0]);
        parent->children.insert(parent->children.begin() + i + 1, z);
    }

    void insertNonFull(Node* node, int k) {
        int i = node->keys.size() - 1;
        if (node->isLeaf) {
            node->keys.push_back(0);
            while (i >= 0 && node->keys[i] > k) {
                node->keys[i + 1] = node->keys[i];
                i--;
            }
            node->keys[i + 1] = k;
        } else {
            while (i >= 0 && node->keys[i] > k) i--;
            i++;
            if (node->children[i]->keys.size() == 2 * t - 1) {
                splitChild(node, i, node->children[i]);
                if (node->keys[i] < k) i++;
            }
            insertNonFull(node->children[i], k);
        }
    }

public:
    BPlusTree(int degree) : t(degree) { root = new Node(true); }

    void insert(int k) {
        Node* r = root;
        if (r->keys.size() == 2 * t - 1) {
            Node* s = new Node(false);
            s->children.push_back(r);
            splitChild(s, 0, r);
            root = s;
            insertNonFull(s, k);
        } else {
            insertNonFull(r, k);
        }
    }

    void traverse() {
        Node* curr = root;
        while (curr && !curr->isLeaf) curr = curr->children[0];
        while (curr) {
            for (int k : curr->keys) std::cout << k << " ";
            curr = curr->next;
        }
    }
};

int main() {
    BPlusTree bpt(3);
    int vals[] = {1, 4, 7, 10, 17, 21, 31, 25, 19, 20};
    for (int v : vals) bpt.insert(v);
    bpt.traverse();
    return 0;
}
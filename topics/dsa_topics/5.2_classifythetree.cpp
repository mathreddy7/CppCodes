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

class TreeClassifier {
private:
    Node* root;

    void buildFromLevelOrder(vector<int>& vals) {
        if (vals.empty() || vals[0] == -1) return;

        root = new Node(vals[0]);
        queue<Node*> q;
        q.push(root);
        int i = 1;

        while (!q.empty() && i < (int)vals.size()) {
            Node* curr = q.front();
            q.pop();

            if (i < (int)vals.size() && vals[i] != -1) {
                curr->left = new Node(vals[i]);
                q.push(curr->left);
            }
            i++;

            if (i < (int)vals.size() && vals[i] != -1) {
                curr->right = new Node(vals[i]);
                q.push(curr->right);
            }
            i++;
        }
    }

    int countNodes(Node* node) {
        if (!node) return 0;
        return 1 + countNodes(node->left) + countNodes(node->right);
    }

    bool isFullBT(Node* node) {
        if (!node) return true;

        if (!node->left && !node->right) return true;

        if (node->left && node->right)
            return isFullBT(node->left) && isFullBT(node->right);

        return false;
    }

    bool isCompleteBT(Node* node, int index, int totalNodes) {
        if (!node) return true;

        if (index >= totalNodes) return false;

        return isCompleteBT(node->left,  2 * index + 1, totalNodes) &&
               isCompleteBT(node->right, 2 * index + 2, totalNodes);
    }

    int height(Node* node) {
        if (!node) return 0;
        return 1 + max(height(node->left), height(node->right));
    }

    bool isPerfectBT() {
        int n = countNodes(root);
        int h = height(root);
        return n == (int)(pow(2, h) - 1);
    }

public:
    TreeClassifier() {
        root = nullptr;
    }

    void build() {
        int n;
        cout << "Enter number of values (use -1 for NULL): ";
        cin >> n;
        vector<int> vals(n);
        cout << "Enter level-order values:\n";
        for (int i = 0; i < n; i++) cin >> vals[i];
        buildFromLevelOrder(vals);
    }

    void classify() {
        int total = countNodes(root);

        cout << "\n======= Tree Classification =======\n";

        cout << "Binary Tree        : YES (always, by structure)\n";

        cout << "Full Binary Tree   : "
             << (isFullBT(root)? "YES" : "NO") << "\n";

        cout << "Complete Binary Tree: "
             << (isCompleteBT(root, 0, total)? "YES" : "NO") << "\n";

        cout << "Perfect Binary Tree : "
             << (isPerfectBT()? "YES" : "NO") << "\n";

        cout << "===================================\n";
    }
};

int main() {
    TreeClassifier tc;
    tc.build();
    tc.classify();
    return 0;
}
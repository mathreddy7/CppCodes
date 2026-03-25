#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int min_pos = 0, max_pos = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < a[min_pos]) min_pos = i;
            if (a[i] > a[max_pos]) max_pos = i;
        }

        int p1 = min(min_pos, max_pos) + 1;
        int p2 = max(min_pos, max_pos) + 1;

        int option1 = p2;
        int option2 = n - p1 + 1;
        int option3 = p1 + (n - p2 + 1);

        cout << min({option1, option2, option3}) << endl;
    }
    return 0;
}
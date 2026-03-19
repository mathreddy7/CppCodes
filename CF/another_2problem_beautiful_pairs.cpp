#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin>>t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        ll ans = 0;
        for (int i = 0; i < n; ++i) {
            ll ai = a[i];
            for (ll k = 1; i + ai * k < n; ++k) {
                if (a[i + ai * k] == k) ++ans;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
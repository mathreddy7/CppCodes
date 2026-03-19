#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,x;
        cin >> n;
        bool ok = false;
        for(int i=0;i<n;i++){
            cin >> x;
            if(x == 67) ok = true;
        }
        if(ok){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}
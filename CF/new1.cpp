#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n), a(n);
        for(int i=0;i<n;i++) cin >> p[i];
        for(int i=0;i<n;i++) cin >> a[i];

        bool ok = true;
        for(int i=0;i<n;i++){
            bool found = false;
            for(int j=0;j<n;j++){
                if(a[i] == p[j]){
                    found = true;
                    break;
                }
            }
            if(found){
                ;
                break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}
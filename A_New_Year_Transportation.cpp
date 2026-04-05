#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,t;cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int c=1;
    while(c<=n){
        if(c==t){
            cout<<"YES\n";
            return 0;
        }
        else{
            if(c>t){
                cout<<"NO\n";
                return 0;
            }else{
                c=c+v[c-1];
            }
            
        }
    }
}
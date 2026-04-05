#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>v(n);
        int diff=INT_MIN;
        //unordered_set<int>s;
        for(int i=0;i<n;i++){
            cin>>v[i];
          //  s.insert(v[i]);
        }
        for(int j=1;j<n;j++){
            if(v[j-1]-v[j]>=diff){
                diff=v[j-1]-v[j];
            }
        }
        if(k>1){
            cout<<"YES\n";
        }else{
            if(diff<1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    
    
}   
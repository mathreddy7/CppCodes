#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    vector<int>v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<t;i++){
        cout<<v[i]<<" ";
    }
    
    
}   
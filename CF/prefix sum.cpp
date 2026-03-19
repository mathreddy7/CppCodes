#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,q;cin>>n>>q;
    vector<int>v(n+1);
    vector<int>ps(n+1);
   // ps[0]=0;
    for(int i =1;i<=n;i++){
        cin>>v[i];
        ps[i]=ps[i-1]+v[i];
    }
    for(int i=0;i<q;i++){
        int l,r;cin>>l>>r;
        cout<<ps[r]-ps[l-1]<<endl;
    }
}   
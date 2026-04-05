#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;cin>>n;
    vector<int>v(n);int idx=-1, mn=INT_MAX;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        if(mn>v[i]){
            mn=v[i];
            idx=i;
        }
    }
    int rpt=0;
    for(int i=0;i<n;i++) if(mn==v[i]) rpt++;

    if(rpt>1) cout<<"Still Rozdil";
    else cout<<idx+1;
    
}   
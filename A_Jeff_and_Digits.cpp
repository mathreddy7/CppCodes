#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    vector<int>v(n);
    int ct0=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        if(v[i]==0) ct0++;
    }
    if(ct0>0){
        if(sum%9==0){
            for(int j=0;j<(n-ct0);j++) {
                cout<<5;}
            for(int i=0;i<ct0;i++) cout<<0;
        }
        else cout<<0;
    }
    else cout<<0;
    
}   
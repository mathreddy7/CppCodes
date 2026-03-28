#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;cin>>n>>m;
    vector<int>a(n);
    int mx=0,idm=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mx<=a[i]){
            mx=a[i];
            idm=i;
        }
    }
    cout<<idm+1;
    
}   
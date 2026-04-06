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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int sum=0;
        int ct=1;
        for(int i=0;i<n-1;i++){
            if(ct>1){
                
            }
        }
        vector<int>p=v;
        for(int i=0;i<n-1;i++){
            p[i]=v[i]-v[i+1];
            if(p[i]<0) ct++;
        }
        for(int i=0;i<n;i++){
            if(v[i])
        }

    
    }
    
    
}   
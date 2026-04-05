#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long mx=0;
        if(n>2){
        for(int i=1;i<n-1;i++){

            if(mx<=v[i]*v[i-1]){
                mx=v[i]*v[i-1];
            }
            if(mx<=v[i]*v[i+1]){
                mx=v[i]*v[i+1];
            }
        }
    }
    else{
        cout<<v[0]*v[1]<<endl;
        continue;
    }
        cout<<mx<<endl;
    }
    
    
}   
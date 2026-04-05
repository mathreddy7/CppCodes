#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        vector<int>e;
        vector<int>o;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0){
                e.push_back(v[i]);
            }else{
                o.push_back(v[i]);
            }
        }
        int ct=0;
        vector<int>p=e;
        int k=e.size();
        //for(int i=0;i<k;i++) p.push_back(e[i]);
        for(int i=0;i<n-k;i++) p.push_back(o[i]);
        for(int i=0;i<n;i++){
            for(int j=i+1;i<n;j++){
                if(gcd(p[i],p[j]*2)>1){
                    ct++;
                }
            }
        }


        cout<<ct<<endl;   
    }
    
    
}   
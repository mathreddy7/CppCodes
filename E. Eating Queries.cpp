#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        int vector<int>a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        vector<int >q(q);
        for(int i =0;i<q;i++){
            cin>>q[i];
        }
        sort(v.begin(),v.end());
        vector<int >sfs(n);
        for(int i=n-1;i>0;i--){
            sfs[i-1]+=sfs[i];
        }
        
    }
}
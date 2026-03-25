#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long  >p(n);
        vector<long long >a(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int z=0,m=0;
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(a[i]==p[i]){
                z++;break;
            }else
            if(a[i]==p[i+1]){
                z++;
                p[i]==p[i+1];break;
            }else if(a[i]==p[i-1]){
                z++;
                p[i]=p[i-1];break;
            }
        }
        if(a[0]==p[0]){
                z++;break;
            }else
            if(a[0]==p[1]){
                z++;
                p[0]==p[1];break;
            }
        
        for(int j=0;j<n;j++){
            if(a[j]==p[j]){
                m++;
            }
        }
        if(m==n){
            cout<<"YES\n";
        }else cout<<"NO\n";
        }
    }
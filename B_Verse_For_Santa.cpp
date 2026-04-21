#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,s;cin>>n>>s;
        vl a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        
        ll sum=0, mx=-1, idx=-1;
        bool busted=false;
        
        for(ll i=0;i<n;i++){
            sum+=a[i];
            
            if(a[i]>mx){
                mx=a[i];
                idx=i+1; 
            }
            
            if(sum>s){
                cout<<idx<<"\n";
                busted=true;
                break;
            }
        }
        
        if(!busted){
            cout<<0<<"\n";
        }
    }
}
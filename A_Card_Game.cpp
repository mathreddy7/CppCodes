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
        ll n,k1,k2;ll p=0;
        cin>>n>>k1>>k2;
        ll mx=-1;
        for(ll i=0;i<n;i++){
            ll x;cin>>x;
            if(x>mx){
                mx=x;
                if(i>=k1) p=2;
                else p=1;
            }
        }
        if(p==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
    
}
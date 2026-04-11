#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;
bool is_prf_sq(ll k){
    if(k<0) return false;
    ll rt=round(sqrt(k));
    return rt*rt==k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll y=0;
        for(ll i=0;i<n;i++){
            ll x;cin>>x;
            if(!is_prf_sq(x)){
                y=1;
            }
        }
        if(y>0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    
}   
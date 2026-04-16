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
        ll n,k;cin>>n>>k;
        vector<pair<ll,ll>> m;
        for(ll i=1;i<=n;i++){
            ll x;cin>>x;
            m.push_back({x%k,i});
        }
        sort(m.begin(),m.end());
        for(const auto &pair:m){
            cout<<pair.second<<" ";
        }
        cout<<"\n";
    }
    
}
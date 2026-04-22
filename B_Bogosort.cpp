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
        ll n;cin>>n;
        vl v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        for(ll i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}
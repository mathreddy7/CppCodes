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
        vl v(n+1);
        for(ll i=n;i>0;i--){
            cin>>v[i];
        }
        ll ans=0;
        ll z=1;
        while(z<n){
            if(v[z+1]==v[1]){
                z++;
                continue;
            }else {
                ans++;
                z=z*2;
            }
        }
        cout<<ans<<"\n";
    }
}
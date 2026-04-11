#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;
bool IsPerQb(ll a){
    ll k=round(cbrt(a));
    return k*k*k==a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){

        ll x;cin>>x;
        ll z=0;
        ll n=1;
        while((n*n*n)<x){
            ll p=x-(n*n*n);
            n++;
            if(IsPerQb(p)){
                z=1;
                break;
            }
        }
        if(z==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}
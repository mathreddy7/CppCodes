#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;cin>>n>>m;
    vl a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    if(n>m){
        cout<<0;
    }else{
        ll ans=1;
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                ans=(ans%m)*(abs(a[i]-a[j])%m);
            }
        }
        cout<<ans%m;;
    }
    
}
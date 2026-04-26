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
        vl a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        bool z=true;
        for(ll i=0;i<n;i++){
            ll p=ll (pow(k,i));
            if(a[i]%(p)!=0){
                z=false;
                break;
            }
        }
        if(z){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
}
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
        ll n,d;cin>>n>>d;
        if(d<=n){
            cout<<"YES\n";
        }else{
            ll pr=0;
            for(ll i=1;i<=40000;i++){
                if(i+((d+i)/(i+1))<=n){
                    cout<<"YES\n";
                    pr=1;
                    break;
                }
            }
            if(pr==0){
                cout<<"NO\n";
            }
        }
    }
}
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
        ll a,b,c;cin>>a>>b>>c;
        ll sum = a+b+c;
        ll k = sum/9;
        ll mn = min({a,b,c});
        
        if(sum%9==0 && mn>=k){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
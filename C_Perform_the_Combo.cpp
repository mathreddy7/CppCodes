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
        ll n,m;cin>>n>>m;
        string s;cin>>s;
        vl diff(n+1,0);
        for(ll i=0;i<m;i++){
            ll x;cin>>x;
            diff[0]++;
            diff[x]--;
        }
        vl ans(26,0);
        ll curr=0;
        for(ll i=0;i<n;i++){
            curr+=diff[i];
            ans[s[i]-'a']+=curr+1;
        }
        for(ll i=0;i<26;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}

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
        string s;cin>>s;

        ll idx=0;
        if(n>1&&s[0]==s[1]){
            idx=0;
        }else{
            for(ll i=1;i<n;i++){
                if(s[i]<=s[i-1]){
                    idx=i;
                }else{
                    break;
                }
            }
        }
        
        for(ll i=0;i<=idx;i++){
            cout<<s[i];
        }
        for(ll i=idx;i>-1;i--){
            cout<<s[i];
        }
        cout<<"\n";
    }
}
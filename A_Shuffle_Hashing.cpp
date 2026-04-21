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
        string p,h;
        cin>>p>>h;
        sort(p.begin(),p.end());
        ll m=p.size(),n=h.size();
        ll t=0;
        for(ll i=0;i<=n-m;i++){
            string s=h.substr(i,m);
            sort(s.begin(),s.end());
            if(p==s){
                //cout<<"YES\n";
                t=1;
            }
        }
        if(t){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
}
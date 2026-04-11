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
        ll pr=1;
        cin>>v[0];
        for(ll i=1;i<n;i++) {
            cin>>v[i];
            if(v[i-1]!=v[i]) pr=0;
        } 
        if(n>3&&pr==1){
            cout<<"YES\n";
        }
        if(n>3&&pr==0){
            cout<<"NO\n";
        }
        if(n==2){
            cout<<"YES\n";
        }
        if(n==3){
            set<ll>s;
            s.insert(v[0]);
             s.insert(v[1]);
              s.insert(v[2]);
              if(s.size()==1||s.size()==2){
                cout<<"YES\n";
              }else{
                cout<<"NO\n";
              }
        }

    }
    
    
}   
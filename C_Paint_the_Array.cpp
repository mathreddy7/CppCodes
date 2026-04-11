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
        ll omn=1e9,emn=1e9;
        for(ll i=1;i<n;i++){
            cin>>v[i];
            if(i%2==0){
                if(v[i]<emn) emn=v[i];
            }else{
                if(v[i]<omn) omn=v[i];
            }
        }
        ll x=1,y=1;
        for(ll i=1;i<n+1;i+=2){
            if(v[i]%omn!=0) {
                x=0; 
                break;
            }
        }
        for(ll i=2;i<n+1;i+=2){
            if(v[i]%emn!=0) {
                y=0; 
                break;
            }
        }
        if(x>0){
            cout<<omn<<"\n";
        }else if(y>0){
            cout<<emn<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
    
    
}   
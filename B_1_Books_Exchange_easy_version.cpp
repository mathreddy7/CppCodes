#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll q;cin>>q;
    while(q--){
        ll n;cin>>n;
        vl v(n+1);
        for(ll i=1;i<=n;i++){
            cin>>v[i];
        }
        for(ll i=1;i<=n;i++){
            bool t=true;ll ct=0;
            ll z=i;
            while(t){
                if(v[z]==z){
                    t=false;
                    ct++;
                }else ct++;
            }
            cout<<ct<<" ";
        }
        cout<<"\n";
    }
    
}
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
        for(ll i=1;i<=n;i++){
            cin>>v[i];
        }
        ll ct=0;
        for(ll i=1;i<=n;i++){
            ll st=v[i]-(i%v[i]);
            for(ll j=st;j<=n;j+=v[i]){
                if(j>i&&v[i]*v[j]==i+j){
                    ct++;
                }
            }
        }
        cout<<ct<<"\n";
    }
}
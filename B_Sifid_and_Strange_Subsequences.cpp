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
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        ll ct=0;
        ll md=2e9;
        for(ll i=0;i<n;i++){
            if(v[i]<=0){
                ct++;
                if(i>0){
                    md=min(md, v[i]-v[i-1]);
                }
            }else{
                if(md>=v[i]){
                    ct++;
                }
                break;
            }
        }
        cout<<ct<<"\n";
    }
}

//just taking all neg bcz anyhow there diff of pair either 0 or more ahha !
//and 
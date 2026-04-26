#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;cin>>n;
    vl a(n),b(n);
    vl ab(n),ba(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++){
        cin>>b[i];
        ab[i]=a[i]-b[i];
        ba[i]=b[i]-a[i];
    }
    // sort(ab.begin(),ab.end());
    // sort(ba.begin(),ba.end());
    ll ct=0;
    for(ll i=0;i<n;i++){
        // ct+=lower_bound(ba.begin(),ba.end(),ab[i])-ba.begin();
        for(ll j=i+1;j<n;j++){
            if(ab[i]>ba[j]) ct++;
        }
    }
    cout<<ct;
    
}
//sorrryyyy i did counting bad way 
//i dont know i am bit afaid of 2 loops 
//and i wrote eqn as
//ai-bi>aj-bj
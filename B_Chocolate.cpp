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
    vl a(n);
    bool hs1=false;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            hs1=true;
        }
    }
    ll prd=1;
    ll  last1=-1;
    for(ll i=0;i<n;i++){
        if(a[i]==1){
           if(last1!=-1){
            prd*=(i-last1);
           }
           last1=i;
        }
    }
    if(hs1){
        cout<<prd;
    }else{
        cout<<0;
    }
    
}

// i just checkd 0s btwn one bcz according pnc
// of principle multiplicity its just mupltipy taht spaces btw 1s
// for k 0s k+1 spaces btw 1
//all good!! with god pnc
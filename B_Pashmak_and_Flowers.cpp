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
    ll mx=-1,mn=LLONG_MAX;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(mx<a[i]) mx=a[i];
        if(mn>a[i]) mn=a[i];
    }
    ll diff=mx-mn;
    cout<<diff<<" ";
    if(mx==mn){
        cout<<n*(n-1)/2;
    }else{
        ll ctmx=0,ctmn=0;
        for(ll i=0;i<n;i++){
            if(a[i]==mx) ctmx++;
            if(a[i]==mn) ctmn++;
        }
        cout<<ctmn*ctmx;
    }
}

//yaar i mised case when all same way beauty 
// any ways
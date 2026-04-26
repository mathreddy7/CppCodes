#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll mx=-1;
    for(ll i=0;i*a<=n;i++){
        for(ll j=0;i*a+j*b<=n;j++){
            ll rem=n-(i*a+j*b);
            if(rem%c==0){
               ll k=rem/c;
               if(mx<i+j+k) mx=i+j+k;
            }
        }
    }
    cout<<mx;
    
}
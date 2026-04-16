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
        ll a,b,c,m;cin>>a>>b>>c>>m;
        vl arr={a,b,c};
        sort(arr.begin(),arr.end());
        ll x=arr[0];
        ll y=arr[1];
        ll z=arr[2];
        ll max_m=a+b+c-3;
        ll min_m=(z-1)-(x+y);
        if(m>=min_m&&m<=max_m){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
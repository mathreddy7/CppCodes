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
        ll a,b,n;cin>>a>>b>>n;
        vl arr(n);
        for(ll i=0;i<n;i++) cin>>arr[i];
        ll summ=b;
        for(ll i=0;i<n;i++){
            if(arr[i]<=a-1) summ+=arr[i];
            else summ+=a-1;
        }
        cout<<summ<<"\n";
    }
}
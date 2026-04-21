#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;while(t--){
        ll n;cin>>n;
        vl a(n);
        ll idxmx=-1;ll idxmn=-1;
        ll mx=-1;ll mn=LLONG_MAX;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll p=0;
        for(ll i=1;i<n;i++){
            if(abs(a[i]-a[i-1])>=2){
                cout<<"YES\n"<<i<<" "<<i+1<<"\n";
                p=1;
                break;
            }
        }
        if(!p){
            cout<<"NO\n";
        }
    }
    
}
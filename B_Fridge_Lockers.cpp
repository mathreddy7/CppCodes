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
        ll n,m;cin>>n>>m;
        vl a(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(m<n||n==2){
            cout<<-1<<"\n";
        }else{
            cout<<2*sum<<"\n";
            for(ll i=1;i<n;i++){
                cout<<i<<" "<<i+1<<"\n";
            }
            cout<<n<<" "<<1<<"\n";
        }
    }
}
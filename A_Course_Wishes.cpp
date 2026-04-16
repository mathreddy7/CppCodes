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
        ll n,k;cin>>n>>k;
        vl a(n);
        vl b(k);
        vl hs(k+1,0);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll oprq=0;
        for(ll i=0;i<k;i++){
            cin>>b[i];
            hs[b[i]]++;
            if(b[i]<=k){
                oprq+=k-b[i];
            }

        }
        ll opr=1000;
        if(opr-oprq>0){
            cout<<oprq<<"\n";
        }
        else{
            cout<<-1<<"\n";
            continue;
        }
        for(ll i=k;i>0;i--){
            if(opr>0){
                for(ll j=i;i<k+1;j++){
                    cout<<j<<" ";
                }
            }
        }

    }
    
}
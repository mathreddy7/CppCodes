#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q;
    cin>>n>>q;
    vl a(n+q+1);
    vl t(n);
    for(ll i=q+1;i<n+q+1;i++){
        cin>>a[i];
    }
    for(ll i=0;i<0;i++){
        cin>>t[i];
    }
    ll z=0;
    while(z<=q){
        for(ll i=q+1-z;i<n+q+1;i++){
            if(a[i]!=-1){
                if(a[i]==t[z]){
                    a[q-z]=a[i];
                    a[i]=-1;
                    cout<<i-q<<"\n";
                    z++;

                }
            }
        }
    }

    
}
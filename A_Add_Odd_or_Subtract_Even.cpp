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
        ll a,b;cin>>a>>b;
        ll z=0;
        if(a<b){
            ll c=a-b;
            if(c%2==0){
                z=2;
            }else{
                z=1;
            }
        }else if(a>b){
                ll c=a-b;
                if(c%2==0){
                    z=1;
                }else {
                    z=2;
                }
            }
            else{
                z=0;
            }
            cout<<z<<"\n";
    }
    
}
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
        ll k=0,ct=0;
        ll p=abs(a-b);
        while(ct<p||(ct-p)%2!=0){
            k++;
            ct+=k;
        }
        cout<<k<<"\n";
    }
    
}
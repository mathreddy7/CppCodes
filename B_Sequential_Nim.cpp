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
        ll n;cin>>n;
        vl v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll k=0;
        while(k<n&&v[k]==1){
            k++;
        }
        if(k==n){
            if(k%2!=0){
                cout<<"First\n";
            }else{
                cout<<"Second\n";
            }
        }else{
            if(k%2==0){
                cout<<"First\n";
            }else{
                cout<<"Second\n";
            }
        }
    }
}
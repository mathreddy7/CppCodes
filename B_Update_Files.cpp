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
        ll cc=1;
        ll hrs=0;
        while(cc<=k&&cc<n){
            hrs++;
            cc*=2;
        }
        if(cc<n){
            ll rc=n-cc;
            ll eh=(rc+k-1)/k;

            ////so hard cealing dibvision i have used realy doing 
            //illigal things of math hahhhah
            hrs+=eh;
        }
        cout<<hrs<<"\n";

    }
    
}
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
        ll n,a,b;cin>>n>>a>>b;
        if(n>=a+b+2||(a==n&&b==n)){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    
}
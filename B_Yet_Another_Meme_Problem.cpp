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
        ll count_b=to_string(b + 1).length()-1;
        cout<<a*count_b<<"\n";
    }
}
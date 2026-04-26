#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;cin>>n>>m;

    ll p=n%m;
    ll k=n/m;
    cout<<(m-p)*(k*(k-1)/2)+p*((k+1)*k/2)<<" ";
    cout<<(n-m+1)*(n-m)/2;
    
}
// just paly pnc again
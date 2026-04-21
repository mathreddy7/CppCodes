#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

bool check(ll x){
    while(x>0){
        if(x%3==2)return false;
        x/=3;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll q;cin>>q;
    while(q--){
        ll n;cin>>n;
        while(!check(n)){
            n++;
        }
        cout<<n<<"\n";
    }
}
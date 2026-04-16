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
        string s;cin>>s;
        int p= stoi(s);
        if(p<10){
            cout<<p<<"\n";
        }else{
            ll p=s.size()-1;
            cout<<(9*p)+s[0]-'0'<<"\n";
        }
    }
    
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int,int> pi;
#define push_back pb;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        ll sum=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            sum+=x;
        }
        if((n*k)%2==0||sum%2!=0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
    
}   
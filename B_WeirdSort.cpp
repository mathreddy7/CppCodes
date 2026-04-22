#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;
// do type again optimal way possible see it










int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        vl a(n),b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        vl al(n,0);
        for(ll i=0;i<m;i++){
            ll p;cin>>p;
            al[p-1]=1;
        }
        if(m==n-1){
            cout<<"YES\n";
            continue;
        }
        for(ll i=0;i<n;i++){
            if(al[i]==0) continue;
            ll j=i;
            while(j<n-1&&al[j]==1) j++;
            sort(a.begin()+i,a.begin()+j+1);
            i=j;
        }
        sort(b.begin(),b.end());
        ll pr=1;
        for(ll i=0;i<n;i++){
            if(a[i]!=b[i]){
                pr=0;
                break;
            }
        }
        if(pr){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}

// its wierd but simple yaa alright  
//i just made chuns nad sorted them and check with sorted array
// probably optimal way there check it 
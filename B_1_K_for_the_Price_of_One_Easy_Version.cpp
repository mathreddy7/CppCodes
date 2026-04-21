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
        ll n,p,k;cin>>n>>p>>k;
        vl a(n);
        //ll mn=INT_MAX;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            //if(mn>a[i]) mn=a[i];
        }
        sort(a.begin(),a.end());
        ll sum=0; //ct=0;
        vl ps(n);
        ll idx=-1;
        for(ll i=0;i<n;i++){
            sum+=a[i];
            ps[i]=sum;
            if(p>=ps[i]) idx=i;
            else break;
        }
        ll remp=p-ps[idx];
        remp+=a[idx];
        if(idx<=n-2){
            if(remp>=a[idx+1]){
            cout<<idx+2<<"\n";
        }else{
            cout<<idx+1<<"\n";
        }
        }else{
            cout<<n<<"\n";
        }
        

    }
    
}
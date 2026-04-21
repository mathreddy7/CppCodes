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
        vl a(n);
        ll sum=0;ll ads_taste=0;
        ll adsmx=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(ll i=0;i<n-1;i++){
            ads_taste+=a[i];
            if(ads_taste>adsmx) adsmx=ads_taste;
            if(ads_taste<0) ads_taste=0;
        }
        ads_taste=0;
        for(ll i=1;i<n;i++){
            ads_taste+=a[i];
            if(ads_taste>adsmx) adsmx=ads_taste;
            if(ads_taste<0) ads_taste=0;
        }
        if(sum>adsmx){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
//just uesd max sub areey as o of n 
// for 1 to n-1 and 2 to n th posn;
// alright some bit errror in handling kandias algo 
// now just gave one candy to him 
// hhahaa!! 
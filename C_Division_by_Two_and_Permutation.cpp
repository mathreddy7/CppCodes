#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin<<t;
    while(t--){
        ll n;cin>>n;
        vl v(n+1);
        ll mx=-1;
        for(ll i=1;i<n+1;i++){
            cin>>v[i];
            if(mx<v[i]) mx==v[i];
        }
        if(mx<n){
            cout<<"NO\n";
        }else{
            ll i=1;
            while(i<51){
                while(1){
                    if(v[i]>50){
                        v[i]=v[i]/2;
                    }else {
                        if(v[i]!=i){
                        swap(v[i],v[v[i]]);
                        }
                        else{
                            v[i]=v[i]/2;
                            if(v[i]==1){
                                break;
                            }
                        }
                    }
                }
                i++;
            }
            
        }
    }
    
    
}   
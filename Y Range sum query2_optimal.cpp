#include<bits/stdc++.h>
using namespace std;
long long ll;
int main(){
    int n,q;cin>>n>>q;
    vector<ll>a(n);
    ll sum=0;
    vector<ll>b(n+1);
    for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    b[i+1]=sum;
    }
    
    for(int i=0;i<q;i++){
        int l,r;cin>>l>>r;
        cout<<b[r]-b[l-1]<<endl;
    }

}
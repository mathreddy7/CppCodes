#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test,n;
    cin>>test;
    for(ll i =0;i<test;i++){
    	cin>>n;
    	ll max=0;
    	vl a(n);
    	for (ll j=0;j<n;j++){
    		cin>>a[j];
    	}
    	for(ll k=0;k<n;k++){
    		if(a[k]>max)
    		max=a[k];
    	}
    cout<<max<<endl;
    }	
} 

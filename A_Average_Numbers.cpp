#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    vl a(n);
    ll sum=0;
    vl v;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }ll ct=0;
    for(ll i=0;i<n;i++){
        if(sum==a[i]*n){
            ct++;
            v.push_back(i);
        }
    }
    cout<<ct<<"\n";
    
    for(ll i=0;i<v.size();i++){
        cout<<v.at(i)+1<<" ";
    }
    
}
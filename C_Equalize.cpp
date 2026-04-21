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
    ll sw=0,ct=0;
    string a,b;cin>>a>>b;
    if(a[n-1]==b[n-1]){
        for(ll i=1;i<n;i++){
        if(a[i-1]==b[i-1]){
            continue;
        }else{
            if(a[i-1]==b[i]&&a[i]==b[i-1]){
                sw++;
                swap(a[i-1],a[i]);
            }else{
                if(a[i-1]=='0') a[i-1]=1;
                else a[i-1]=1;
                ct++;
            }
        }
    }
    }else{
        for(ll i=1;i<n-1;i++){
        if(a[i-1]==b[i-1]){
            continue;
        }else{
            if(a[i-1]==b[i]&&a[i]==b[i-1]){
                sw++;
                swap(a[i-1],a[i]);
            }else{
                if(a[i-1]=='0') a[i-1]=1;
                else a[i-1]=1;
                ct++;
            }
        }
    }
    if(a[n-1-1]==b[n-1-1]){
            ct++;
        }else{
            if(a[n-1-1]==b[n-1]&&a[n-1]==b[n-1-1]){
                sw++;
                swap(a[n-1-1],a[n-1]);
            }else{
                if(a[n-1-1]=='0') a[n-1-1]=1;
                else a[n-1-1]=1;
                ct++;
                ct++;
            }
        }
    }
    cout<<sw+ct;
    
}
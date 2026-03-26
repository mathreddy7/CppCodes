#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long double n;cin>>n;
    vector<long double>v(n);
    long double sum=0;
    for(int i =0;i<n;i++){
        cin>>v[i];
        sum=sum+(v[i]);
    }
    cout<<fixed<<setprecision(12)<<sum/n;
    
}   
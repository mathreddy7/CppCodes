#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        //vector<int>V(7);
        int mx=-68;
        int sum=0;
        for(int i=0;i<7;i++){
            int x;cin>>x;
            sum+=x;
            if(mx<x) mx=x;
        }
        sum=sum-mx;
        sum=0-sum;
        sum+=mx;
        cout<<sum<<endl;
    }
    
}   
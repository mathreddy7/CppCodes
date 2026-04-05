#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    vector<int>v(n);
    int ct0=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        if(v[i]==0) ct0++;
    }
    if(ct0>0){
       int ct5=n-ct0;int us5=(ct5/9)*9;
       if(us5==0){
        cout<<0;
       }else {
        for(int i=0;i<us5;i++){
            cout<<5;
        }
        for(int i=0;i<ct0;i++){
            cout<<0;
        }
    }
    }
    else cout<<-1;
    
}   
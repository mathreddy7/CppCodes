#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        cout<<abs(x-y)<<endl;
        for(int i=0;i<x-1;i++){
            cout<<1<<" ";
        }
        if(x>1){
            cout<<1;
        }
        for(int i=0;i<y;i++){
            cout<<-11<<" ";
        }
    }
    
}   
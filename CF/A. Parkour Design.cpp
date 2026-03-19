#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        int count =0;
        int k2=x/2,k3=x/3,k4=x/4,k5=x/5,k6=x/6,k7=x/7,k9=x/9;
        if(x==k2*2&&y==k2*1){
            cout<<"YES\n";
            count++;
        }
        else if(x==k3*30&&y==k3*1){
            cout<<"YES\n";
            count++;
        }
        else if(x==k4*4&&y==k4*-1){
            cout<<"YES\n";
            count++;
        }
        else if(x==k5*5&&y==k5*2){
            cout<<"YES\n";
            count++;
        }
        else if(x==k6*6&&y==k6*0){
            cout<<"YES\n";
            count++;
        }
        else if(x==k7*7&&y==k7*0){
            cout<<"YES\n";
            count++;
        }
        else if(x==k9*9&&y==k9*1){
            cout<<"YES\n";
            count++;
        }
        else {
            cout<<"NO\n";
        }
        
    }
}   
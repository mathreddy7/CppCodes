#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int k;cin>>k;
    while(k--){
        int n,x,t;cin>>n>>x>>t;
        if(x>t){
            cout<<0<<endl;
        }
        else if(x==t){
            cout<<1<<endl;
        }
        else{
           //weast cout<<(n-1)*(t/x)+1<<endl;
           cout<<(((n-1)*x-t)/x)*(x/t)+((x/t)*((x/t)+1))/2; 
        }
    }
}   
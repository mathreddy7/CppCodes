#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    int ins=0;
    int req=0;
    while(t--){
        int a,b;cin>>a>>b;
        ins=ins-a+b;
        if(req<ins){
            req=ins;
        }
    }
    cout<<req;
    
}   
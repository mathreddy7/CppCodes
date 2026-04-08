#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        if(x>=y){
            cout<<"YES\n";
        }else if(x==1){
            cout<<"NO\n";
        }else if(x<=3){
            if(y<=3){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"YES\n";
        }
    }
}//i just got stund now   !!! off
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n==1){
            int x;
            cin>>x;
            cout<<1<<endl;
            continue;
        }
        else{
            for(int i=0;i<n;i++) {
                int x;cin>>x;
            }
            for(int i=0;i<n;i++){
                cout<<2<<" ";
            }
        }
        cout<<endl;
    }
    
}   
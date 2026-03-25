#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int k,x;cin>>k>>x;
        for(int i=0;i<k;i++){
            if(x&3==1){
                x=(x/3)+1;
            }
            else{
                x=x*2;
            }
        }
        cout<<x<<endl;
    }
}   
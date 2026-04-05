#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;

        int pri=0;
        int ans=1;
        int k;cin>>k;
        int mark=k;
        for(int i=1;i<=n;i++){
            int x;cin>>x;
            
            if(pri==0){
                if(mark==x){
                    cout<<ans<<endl;
                    pri=1;
                }else{
                    ans++;
                    if(mark==ans){

                    }
                }
            }
        }



    }
}
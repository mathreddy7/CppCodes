#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int x,y,z;cin>>x>>y>>z;
        int k=31;
        for(int i=1;i<=10;i++){
            int g=abs(i-x)+abs(i-y)+abs(i-z);
           // cout<<g<<endl;
            if(k>g)
            //idex=i;
            k=g;
        }
        cout<<k<<endl;
    }
}   
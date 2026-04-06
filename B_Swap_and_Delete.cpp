#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        string n;cin>>n;
        int c0=0,c1=0;
        int k=n.length();
        for(int i=0;i<k;i++){
            if(n[i]=='0'){
                c0++;
            }else{
                c1++;
            }
        }
        int i;
        for(i=0;i<k;i++){
            if(n[i]=='1'){
                if(c0>0) c0--;
                else break;
            }else{
                if(c1>0) c1--;
                else break;
            }
        }
        cout<<k-i<<"\n";
    }
}
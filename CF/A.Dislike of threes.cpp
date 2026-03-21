#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int k;cin>>k;
        int p=1;int i=0;
       while(1){
        if(p%3!=0&&p%10!=3){
            i++;
        }
        if(i==k){
            break;
        }      
        p++; 
       }
       cout<<p<<endl;
    }
}   
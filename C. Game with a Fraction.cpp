#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long p,q;cin>>p>>q;
        if(p>=q||p*3<2*q){
            cout<<"Alice"<<endl;
        }
        else {
            cout<<"Bob\n";
        }
    }
}
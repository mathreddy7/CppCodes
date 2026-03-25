#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
        int x=l,y=2*l;
        if(y<=r){
            cout<<x<<" "<<y<<"\n";
        }
        else{
            cout<<-1<<" "<<-1<<"\n";
        }
    }
}
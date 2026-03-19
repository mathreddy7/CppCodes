#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,min=10;cin>>n;
        while(n>0){
            int p=n%10;
            if(p<min){
                min=p;
            }
            n=n/10;
        }
        cout<<min<<endl;
    }
}
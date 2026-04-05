#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(7);
    for(int i=0;i<7;i++){
        cin>>v[i];
    }
    int idx=0;
    while(n>0){
        for(int i=0;i<7;i++){
            n-=v[i];
            if(n<=0){
                
                idx=i;
                break;
            }
        }
    }
    cout<<idx+1;
    
    
}   
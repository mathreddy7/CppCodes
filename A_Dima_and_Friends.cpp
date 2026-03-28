#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int p;cin>>p;
        sum+=p;
    }
    int res=0;
    for(int i=1;i<6;i++){
        if((sum+i)%(n+1)!=1){
            res++;
        }
    }
    cout<<res;
    
}   


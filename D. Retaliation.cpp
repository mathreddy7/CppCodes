#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int sum1=0,sum2=0;
        vector<int>v(n);
        vector<int>v2(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v2[i]=v[i];
        }

        for(int i=0;i<n;i++){
            v[i]-=i;
            sum1+=v[i];
        }
        for(int i=0;i<n;i++){
        v2[i]=v2[i]-(n-i+1);
        sum2+=v2[i];
        }
        if(sum1==0||sum2==v2[1]/n||sum2==0||sum1==v[1]/n){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }

}
#include <bits/stdc++.h>
using namespace std;
long long ncr(int a,int b){
    return tgamma(a+1)/(tgamma(b+1)*tgamma(a-b+1));
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;cin>>n;

        for(int i=0;i<n;i++){
            int x;cin>>x;
        }
        cout<<ncr(10-n,2)*ncr(4,2)<<endl;
    }
}
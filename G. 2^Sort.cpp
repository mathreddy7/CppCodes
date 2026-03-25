#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        //vector<int>v(n,0);
        vector<long long >a(n);
        cin>>a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
        }
        int count=0,result=0;
        for(int i=0;i<n-1;i++){
            if(a[i]<2*a[i+1]){
                count++;
            }else{
                count=0;
            }
            if(count>=k){
                result++;
            }
        }
        cout<<result<<endl;
       
    } 
}   
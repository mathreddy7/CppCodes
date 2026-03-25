#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int count=0;
        vector<long long>a(n);
        //map<int,long long>mp(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            for (long long j=i+a[i];j<n;j+=a[i]){
                if(a[j]==(j-i)/a[i]){
                    count++;
                }
            }
        }
         cout<<count<<endl;
    }
    
}
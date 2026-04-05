#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;cin>>n>>m;
    vector<long long>a(n);
    vector<long long>b(m);
    for(int o=0;o<n;o++){
        cin>>a[o];
    }
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++){

         int l=0;int r=n-1;
         int ans=-1;
         while(l<=r){
            int mid=(r+l)/2;
            if(b[i]>=a[mid]){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
         }

        
        cout<<ans+1<<" ";

    }
    
    
}   
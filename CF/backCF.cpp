#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long x,y,idx=-1,mr=0;
        cin >> n >> x >> y;
        vector<long long>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++){
            if(mr<=a[i]&&a[i]!=x){
                mr=x;
                idx=i;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=((a[i]/x)*y)+ans;
        }
        ans=ans-((a[idx]/x)*y)+a[idx];
        cout<<ans<<endl;
    }
}
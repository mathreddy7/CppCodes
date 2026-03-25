#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=0;i<n;i++){
            int x=0,y=0;
            for(int j=i+1;j<n;j++){
                if(a[j]<a[i]) x++;
                if(a[j]>a[i]) y++;
            }
            cout<<max(x,y)<<" ";
        }
        cout<<"\n";
    }
}
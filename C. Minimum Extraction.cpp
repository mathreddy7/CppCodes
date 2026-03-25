#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int var=v[0];
        for(int i=0;i<n-1;i++){
            int k=v[i+1]-v[i];
            if(k>=var){
                var=k;
            }
        }
        cout<<var<<endl;
    }
    return 0;
}
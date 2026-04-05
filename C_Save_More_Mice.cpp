#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int >v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int catp=0,saved=0;
        for(int i=0;i<k;i++){
            if(catp>=v[i]) break;
            else saved++;
            int dist=n-v[i];
            catp+=dist;
        }
        cout<<saved<<endl;
    }
    
}   
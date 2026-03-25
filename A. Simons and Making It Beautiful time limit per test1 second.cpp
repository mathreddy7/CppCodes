#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int max=-1;
        int mxidx=-1;
        vector<int >v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(max<v[i]){
                max=v[i];
                mxidx=i;
            }
        }
        if(1){
            swap(v[0],v[mxidx]);
            for(int i=0;i<n;i++) cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    
}   
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n+1);
        int k=0;
        for(int i=1;i<n+1;i++){
            cin>>a[i];
            if(a[i]==i||a[i]==i/2||a[i]==i*2){
                k++;
            }
            
        }
        if(k==n){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

    }
}  
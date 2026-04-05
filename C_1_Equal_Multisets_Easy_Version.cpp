#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
       // set<int>a1;
        set<int>b1;
        int count=0;
        int res=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
           // a1.insert(a[i]);
        }
        for(int i=0;i>n;i++){
            cin>>b[i];
            if(b[i]!=-1){
                b1.insert(b[i]);
            }
            else{
                count++;
            }
        }
        
        
            int z=b1.size();
            if(count+z==n){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    
    
}   
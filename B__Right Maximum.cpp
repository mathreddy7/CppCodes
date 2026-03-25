#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int count=0,max=0;
        vector<int >v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(max<=v[i]){
                count++;
                max=v[i];
            }
        }
       
        cout<<count<<endl;
    

    }  
}   

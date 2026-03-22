#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        long long n,c,k;cin>>n>>c>>k;
        vector<long long>v(n);
        long long count=0;
        //beat=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<=c){
                count=count+(c-v[i]);
                c=c+v[i];
            }
           
        }
        if(count <=k){
            c+=count;
        }
        else{
            c+=k;
        }
        cout<<c<<endl;

    }
}   
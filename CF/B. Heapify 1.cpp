#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int >a(n);
        vector<int >b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        if(a[0]>a[1]){
            cout<<"NO\n";
            return 0;
        }
        sort(b.begin(),b.end());
        int k=0,z=0;
        if(n%2!=0){
        for(int i=1;i<=(n/2);i++){
            if(a[i+1]<a[i]){
                swap(a[i],a[2*i]);
            }
        }
        }
        else{
            for(int i=1;i<(n/2);i++){
            if(a[i+1]<a[i]){
                swap(a[i],a[2*i]);
        }
        for(int j=1;j<n;j++){
            if(b[j]==a[j]){
                k++;
            }
            else{
                z++;
            }
        }
        if(z>0){
            cout<<"NO\n";
        }
        else cout<<"YRS\n";
    }
}}
}

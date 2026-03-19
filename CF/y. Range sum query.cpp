#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;cin>>n>>q;
    vector<int>a(n);
    vector<int>b;
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    for(int i=0;i<q;i++){
        int l,r;cin>>l>>r;
        int sum=0;
        for(int i=l-1;i<=r-1;i++){
            sum=sum+a[i];
        }
        b.push_back(sum);
    }
    for(int i=0;i<q;i++){
        cout<<b[i]<<endl;
    }
}
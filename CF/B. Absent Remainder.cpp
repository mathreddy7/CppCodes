#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    vector<int>a(n);
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(min>a[i]){
            min=a[i];
        }
    }
    for(int i=0,k=0;k<n/2;i++){
        if(a[i]!=min){
            cout<<a[i]<<" "<<min<<endl;
            k++;
        }
    }
}
}
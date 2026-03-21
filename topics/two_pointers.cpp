#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    // for( auto num : v){
    //     cout<<num<<" ";
    // }
    //int x=1;y=n;
    for(int i=0,j=n-1;i<j;){
        if(v[i]%2==0){
            i++;
        }else if(v[j]%2!=0){
            j--;
        }else{
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    
    for(auto num:v) cout<<num<<" ";
}   
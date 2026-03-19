/*You are given an array of n integers, and your task is to 
find two values (at distinct positions) whose sum is x*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0,n,k=-1,t;
    cin>>n;
    vector<int>v(n);
    unordered_map<int,int>mp;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>t;
    for(int j=0;j<n;j++){
        mp[v[j]]=t-v[j];
        k=mp.count(t-v[j]);
        if(k>-1&&v[j]==mp[v[j]]){
            cout<<"\n"<<k<<endl<<j;
        }
    }
}
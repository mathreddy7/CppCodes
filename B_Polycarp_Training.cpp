#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int day =1;
    int ct=0;
    for(int i=0;i<n;i++){
        if(day<=v[i]) {
            day++;ct++;
        }
    }
    cout<<ct;

    
    
}   //i just gone mad, i dont dont know why i used set before
// left dublicates there but infinate valve with dublicate will alwaays
//amke comlete practice ahaaah!! :-)
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string x,y;
    string s;
    cin>>x>>y;
    for(int i=0;i<x.size();i++){
        if(x[i]==y[i]){
            s.push_back('0');
            
        }else{
            s.push_back('1');
            
        }
    }
    //reverse(s.begin(),s.end());
    cout<<s;
    
}   
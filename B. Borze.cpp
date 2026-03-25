#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;cin>>s;
    int n=s.length();
    int i=0;
    string v="";
    while(i<n){
        if(s[i]=='.'){
            v+='0';
            i++;
        }else if(s[i+1]=='.'){
           v+='1';
            i+=2;
        }
        else{
           v+='2';
            i+=2;
        }
    }
    cout<<v;
    
}   
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int n=s.length();
        vector<char>v(n);
        if(s[0]==s[1]){
            v.push_back(s[0]);
        }
        for(int i=1;i<n-1;i++){
            if(s[i]==s[i-1]||s[i]==s[i+1]){
                v.push_back(s[i]);
            } 
        }
        if(s[n-1]==s[n-2]){
            v.push_back(s[n-1]);
        }
        if(is_sorted(v.begin(),v.end())){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
    
}   
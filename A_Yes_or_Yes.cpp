#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int cty=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='Y') cty++;
        }
        if(cty>1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    
    
}   
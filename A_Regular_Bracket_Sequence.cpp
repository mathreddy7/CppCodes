#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(n%2==1||s[0]==')'||s[n-1]=='('){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }    
}   
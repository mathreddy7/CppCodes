#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                if(i==0){
                    s[0]=='a';
                }
                else{
                    if(s[i-1]=='a'){
                        s[i]='b';
                    }
                    else{
                        s[i]=='a';
                    }
                }
            }
        }
        bool k=true;
        for(int i=1;i<n;i++){
            if (s[i]==s[i-1]){
                k=false;
                break;
            }
        }
        if(k){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}   
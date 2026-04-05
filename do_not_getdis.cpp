#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;cin>>s;
    vector<char>v;

    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            v.push_back(s[i-1]);    
        }
        int z=0;
        for(char c:v){
            if(v[i-1]==c){
                z=1;
                break;
            }
        }
        


        

    }

    
    
}   